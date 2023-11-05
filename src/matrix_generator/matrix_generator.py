import copy
from typing import List
import time
import numpy as np
import matplotlib.pyplot as plt


# Define matrix class
class Matrix:
    def __init__(self, rows: int, cols: int, zigzag: bool = True):
        self.rows = rows
        self.cols = cols
        self.zigzag = zigzag

        self.matrix = [[(0, 0, 0) for _ in range(cols)] for _ in range(rows)]
        self.full_colors = {
            "red": (255, 0, 0),
            "green": (0, 255, 0),
            "blue": (0, 0, 255),
            "brown": (150, 75, 0),
            "yellow": (255, 255, 0),
            "purple": (128, 0, 128),
            "cyan": (0, 255, 255),
            "orange": (255, 165, 0),
            "pink": (255, 192, 203),
            "black": (0, 0, 0),
            "white": (255, 255, 255),
        }
        self.colors = copy.deepcopy(self.full_colors)
        self.brightness = 1

    def __str__(self):
        return str(self.matrix)

    def __repr__(self):
        return str(self.matrix)

    @property
    def matrix(self):
        return self._matrix

    @matrix.setter
    def matrix(self, matrix):
        self._matrix = matrix
        self.rows = len(matrix)
        self.cols = len(matrix[0])

    @property
    def brightness(self):
        return self._brightness

    @brightness.setter
    def brightness(self, brightness):
        if brightness < 0 or brightness > 1:
            raise ValueError("Brightness must be between 0 and 1")
        self._brightness = brightness
        # Update the base color brightness
        for color in self.full_colors:
            r, g, b = self.full_colors[color]
            self.colors[color] = (
                int(r * brightness),
                int(g * brightness),
                int(b * brightness),
            )
        # Update the brightness of the matrix
        for row in range(len(self.matrix)):
            for col in range(len(self.matrix[row])):
                # Multiply the RGB values by the brightness
                if isinstance(self.matrix[row][col], tuple):
                    self.matrix[row][col] = (
                        int(self.matrix[row][col][0] * brightness),
                        int(self.matrix[row][col][1] * brightness),
                        int(self.matrix[row][col][2] * brightness),
                    )

    def get_indices(self):
        for row in range(self.rows):
            if self.zigzag and ((row + 1) % 2 == 0):
                for col in range(self.cols):
                    yield row, col, ((row + 1) * self.cols) - (col + 1)
            else:
                for col in range(self.cols):
                    yield row, col, ((row) * self.cols) + col

    @property
    def colors(self):
        return self._colors

    @colors.setter
    def colors(self, colors):
        self._colors = colors

    def add_color(self, name, color):
        self.colors[name] = color

    def rgb_matrix(self):
        temp_matrix = copy.deepcopy(self.matrix)
        for row in range(len(temp_matrix)):
            for col in range(len(temp_matrix[row])):
                if temp_matrix[row][col] in self.colors:
                    temp_matrix[row][col] = self.colors[temp_matrix[row][col]]
        return temp_matrix

    def color_matrix(self):
        temp_matrix = copy.deepcopy(self.matrix)
        for row in range(len(temp_matrix)):
            for col in range(len(temp_matrix[row])):
                for color_name in self.colors:
                    if self.colors[color_name] == temp_matrix[row][col]:
                        temp_matrix[row][col] = color_name
        return temp_matrix

    def plot(self):
        # Plot the matrix as a color map
        plt.imshow(self.rgb_matrix())

        # Show the plot
        plt.show()


class Animation:
    def __init__(self, matrices: List[Matrix] = [], delay: float = 0.5):
        self.matrices = matrices
        self.delay = delay
        self.base_arduino_code = f"""
#include <Adafruit_NeoPixel.h>

#define PIN 2

#define NUMPIXELS {matrices[0].rows * matrices[0].cols}

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 100;
void setup() {{
  pixels.begin();
  drawThing();
}}

void loop() {{
  
}}

void drawPixels(int min, int max, uint32_t color) {{
    for(int i=min; i<=max;i++)
        pixels.setPixelColor(i, color);
}}

void drawThing(){{
{self._gen_pixels(self.matrices[0])}
  
  pixels.show();
}}
        """

    def animate(self):
        for matrix in self.matrices:
            matrix.plot()
            time.sleep(self.delay)

    def generate_animation(self):
        pass

    def set_matrices_from_file(self, file_path: str):
        pass

    def _gen_pixels(self, matrix: Matrix):
        newline = "\n"
        return f"{newline.join([f'  pixels.setPixelColor({pixel}, pixels.Color{self.matrices[0].rgb_matrix()[row][col]});' for row,col,pixel in matrix.get_indices()])}"

    def generate_arduino_code(self, filename: str = "animation.ino"):
        with open(filename, "w") as f:
            f.write(self.base_arduino_code)
        # print(self.base_arduino_code)

import numpy as np
import matplotlib.pyplot as plt
import mandelbrot

# Define the plot parameters
xmin, xmax, ymin, ymax = -2.0, 1.0, -1.5, 1.5
width, height = 800, 800
max_iter = 256

# Plot the Mandelbrot set
mandelbrot.plot_mandelbrot(xmin, xmax, ymin, ymax, width, height, max_iter)

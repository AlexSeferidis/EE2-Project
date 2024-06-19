import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import time

def mandelbrot(c, max_iter):
    z = c
    for n in range(max_iter):
        if abs(z) > 2:
            return n
        z = z*z + c
    return max_iter

def mandelbrot_set(xmin, xmax, ymin, ymax, width, height, max_iter):
    r1 = np.linspace(xmin, xmax, width)
    r2 = np.linspace(ymin, ymax, height)
    n3 = np.empty((width, height))
    for i in range(width):
        for j in range(height):
            n3[i, j] = mandelbrot(r1[i] + 1j*r2[j], max_iter)
    return (r1, r2, n3)

def time_mandelbrot(xmin, xmax, ymin, ymax, width, height, max_iter):
    start_time = time.time()
    mandelbrot_set(xmin, xmax, ymin, ymax, width, height, max_iter)
    end_time = time.time()
    return end_time - start_time

# Define the plot parameters
xmin, xmax, ymin, ymax = -2.0, 1.0, -1.5, 1.5
width, height = 640, 480

# Define the iteration steps you want to test
iteration_steps = [50, 100, 150, 200, 250, 300, 350, 400, 450, 500]

# Collect timing data
data = {'iterations': [], 'avg_time_taken': []}
num_runs = 50

for max_iter in iteration_steps:
    total_time = 0
    for _ in range(num_runs):
        total_time += time_mandelbrot(xmin, xmax, ymin, ymax, width, height, max_iter)
    avg_time_taken = total_time / num_runs
    data['iterations'].append(max_iter)
    data['avg_time_taken'].append(avg_time_taken)
    print(f"Iterations: {max_iter}, Average Time taken: {avg_time_taken:.4f} seconds over {num_runs} runs")

# Create a DataFrame and save to CSV
df = pd.DataFrame(data)
df.to_csv('mandelbrot_timing_python.csv', index=False)

print("Timing data saved to 'mandelbrot_timing_python.csv'")

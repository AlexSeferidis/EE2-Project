import numpy as np
cimport numpy as np
import matplotlib.pyplot as plt

def mandelbrot(complex c, int max_iter):
    cdef complex z = c
    cdef int n
    for n in range(max_iter):
        if abs(z) > 2:
            return n
        z = z*z + c
    return max_iter

def mandelbrot_set(double xmin, double xmax, double ymin, double ymax, int width, int height, int max_iter):
    cdef np.ndarray[np.float64_t, ndim=1] r1 = np.linspace(xmin, xmax, width)
    cdef np.ndarray[np.float64_t, ndim=1] r2 = np.linspace(ymin, ymax, height)
    cdef np.ndarray[np.int32_t, ndim=2] n3 = np.empty((width, height), dtype=np.int32)
    cdef int i, j
    for i in range(width):
        for j in range(height):
            n3[i, j] = mandelbrot(r1[i] + r2[j] * 1j, max_iter)
    return r1, r2, n3

def plot_mandelbrot(double xmin, double xmax, double ymin, double ymax, int width=800, int height=800, int max_iter=256):
    r1, r2, n3 = mandelbrot_set(xmin, xmax, ymin, ymax, width, height, max_iter)
    plt.imshow(n3.T, origin='lower', extent=[xmin, xmax, ymin, ymax])
    plt.colorbar()
    plt.title('Mandelbrot Set')
    plt.xlabel('Re')
    plt.ylabel('Im')
    plt.show()

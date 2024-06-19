from PIL import Image
import numpy as np

# Define the resolution of the image
# x_max = 1280
# y_max = 720

x_max = 640
y_max = 480

# Read the binary file
with open("image.data", "rb") as file:
    # Read the data into a numpy array
    data = np.frombuffer(file.read(), dtype=np.uint8)

# Reshape the data to match the image resolution and RGB channels
image_array = np.reshape(data, (y_max, x_max, 3))

# Create an image from the array
image = Image.fromarray(image_array, "RGB")

# Save the image
image.save("output_image.png")

# Display the image (optional)
# image.show()
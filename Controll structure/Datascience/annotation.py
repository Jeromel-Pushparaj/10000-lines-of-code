import cv2
import matplotlib.pyplot as plt

# Read the image
image_path = 'image.jpg'
image = cv2.imread(image_path)

# Convert BGR image to RGB (OpenCV reads images in BGR format)
image_rgb = cv2.cvtColor(image, cv2.COLOR_BGR2RGB)

# Add text annotation to the image
text = "Example Text Annotation"
position = (50, 100)  # (x, y) coordinates for the text
font = cv2.FONT_HERSHEY_SIMPLEX
font_scale = 1
font_color = (255, 0, 0)  # Color in BGR (blue, green, red) format
thickness = 2

cv2.putText(image_rgb, text, position, font, font_scale, font_color, thickness)

# Add shape annotation (rectangle)
start_point = (100, 200)
end_point = (300, 400)
rectangle_color = (0, 255, 0)  # Color in BGR (green, red, blue) format
rectangle_thickness = 2

cv2.rectangle(image_rgb, start_point, end_point, rectangle_color, rectangle_thickness)

# Display the image with annotations
plt.figure(figsize=(8, 6))
plt.imshow(image_rgb)
plt.axis('off')  # Hide axis
plt.title('Image with Annotations')
plt.show()

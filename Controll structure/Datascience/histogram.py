import matplotlib.pyplot as plt
import numpy as np

# Generating random data for demonstration
data = np.random.randn(1000)  # Generating 1000 random numbers from a standard normal distribution

# Creating a histogram
plt.hist(data, bins=30, color='skyblue', edgecolor='black')  # Plotting the histogram with 30 bins
plt.title('Histogram')  # Adding a title
plt.xlabel('Value')     # Adding label to x-axis
plt.ylabel('Frequency') # Adding label to y-axis
plt.grid(True)          # Adding grid lines
plt.show()

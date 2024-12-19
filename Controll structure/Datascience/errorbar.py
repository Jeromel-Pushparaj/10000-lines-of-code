import matplotlib.pyplot as plt
import numpy as np

# Data for demonstration
x = np.arange(0, 10, 1)
y = np.sqrt(x)
# Example of symmetric error bars
yerr = 0.2  # Constant error for all data points (symmetric)

# Creating an errorbar plot
plt.errorbar(x, y, yerr=yerr, fmt='o', color='blue', ecolor='red', capsize=5)
plt.xlabel('X-axis')
plt.ylabel('Y-axis')
plt.title('Errorbar Plot (Symmetric Errors)')
plt.grid(True)
plt.show()

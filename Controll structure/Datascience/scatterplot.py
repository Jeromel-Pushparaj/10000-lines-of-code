import matplotlib.pyplot as plt

# Sample data
x = [1, 2, 3, 4, 5]  # X-axis values
y = [2, 3, 5, 7, 11]  # Y-axis values

# Create a scatter plot
plt.scatter(x, y, color='blue', marker='o', label='Scatter Plot')

# Adding labels and title
plt.xlabel('X-axis')
plt.ylabel('Y-axis')
plt.title('Simple Scatter Plot')

# Display the legend
plt.legend()

# Show the plot
plt.grid(True)
plt.show()

import seaborn as sns
import numpy as np
import matplotlib.pyplot as plt


# Generating random data for demonstration
data = np.random.randn(1000)  # Generating 1000 random numbers from a standard normal distribution

# Creating a density plot using Kernel Density Estimation (KDE)
sns.kdeplot(data, shade=True, color='orange')  # Plotting the KDE plot
plt.title('Density Plot')  # Adding a title
plt.xlabel('Value')         # Adding label to x-axis
plt.ylabel('Density')       # Adding label to y-axis
plt.grid(True)              # Adding grid lines
plt.show()

from mpl_toolkits.basemap import Basemap
import matplotlib.pyplot as plt

# Create a Basemap instance
m = Basemap(projection='mill',llcrnrlat=-90,urcrnrlat=90,\
            llcrnrlon=-180,urcrnrlon=180,resolution='c')

# Draw coastlines and countries
m.drawcoastlines()
m.drawcountries()

# Define a specific location (New York City, for example)
lat, lon = 40.7128, -74.0060  # Latitude and Longitude of New York City

# Convert coordinates to the map's projection
x, y = m(lon, lat)

# Plot a marker for the location
m.plot(x, y, 'ro', markersize=8)  # Red circle marker with a size of 8

# Show the map with the marker
plt.title('Map with Marker')
plt.show()

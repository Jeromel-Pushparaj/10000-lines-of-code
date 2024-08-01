# Function to print the matrix
def print_matrix(matrix):
    for row in matrix:
        print(" ".join(map(str, row)))

# Warshall's algorithm to compute the transitive closure
def warshall_algorithm(graph):
    num_vertices = len(graph)
    
    # Initialize the reachability matrix with the input graph's adjacency matrix
    reach = [[0] * num_vertices for _ in range(num_vertices)]
    
    # Set initial reachability based on the input graph
    for i in range(num_vertices):
        for j in range(num_vertices):
            reach[i][j] = graph[i][j]
    
    # Update the reachability matrix
    for k in range(num_vertices):
        for i in range(num_vertices):
            for j in range(num_vertices):
                reach[i][j] = reach[i][j] or (reach[i][k] and reach[k][j])
    
    # Print the transitive closure matrix
    print("Transitive closure of the given graph:")
    print_matrix(reach)

# Example directed graph represented as an adjacency matrix
# 1 represents a direct edge from i to j, 0 represents no direct edge
graph = [
    [1, 1, 0, 1],
    [0, 1, 1, 0],
    [0, 0, 1, 1],
    [0, 0, 0, 1]
]

warshall_algorithm(graph)
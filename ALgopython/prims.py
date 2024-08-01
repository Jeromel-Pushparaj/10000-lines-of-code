import sys

def prims(graph):
    num_vertices = len(graph)
    key = [sys.maxsize] * num_vertices
    parent = [-1] * num_vertices
    mst_set = [False] * num_vertices
    key[0] = 0
    
    for _ in range(num_vertices):
        min_key = sys.maxsize
        min_index = -1
        for v in range(num_vertices):
            if not mst_set[v] and key[v] < min_key:
                min_key = key[v]
                min_index = v
        u = min_index
        mst_set[u] = True
        
        for v in range(num_vertices):
            if not mst_set[v] and graph[u][v] > 0 and  graph[u][v] < key[v]:
                key[v] = graph[u][v]
                parent[v] = u
                
    print("Edge \tWeight")
    for i in range(1, num_vertices):
        print(f"{parent[i]} - {i} \t{graph[i][parent[i]]}")

# Example graph (adjacency matrix)
graph = [
    [0, 2, 0, 6, 0],
    [2, 0, 3, 8, 5],
    [0, 3, 0, 0, 7],
    [6, 8, 0, 0, 9],
    [0, 5, 7, 9, 0]
]

prims(graph)
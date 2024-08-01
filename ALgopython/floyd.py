def print_so(dist):
    for i in range(len(dist)):
        for j in range(len(dist[i])):
            if dist[i][j] == float('inf'):
                print('INF', end='\t')
            else:
                print(dist[i][j], end = '\t')
        print()
            

def floyd_warshall(graph):
    n_v = len(graph)
    
    dist = [[float('inf')] * n_v for _ in range(n_v)]
    
    for i in range(n_v):
        dist[i][i] = 0
        
    for i in range(n_v):
        for j in range(n_v):
            if graph[i][j] != 0:
                dist[i][j] = graph[i][j]
    
    for k in range(n_v):
        for i in range(n_v):
            for j in range(n_v):
                if dist[i][j] > dist[i][k] + dist[k][j]:
                    dist[i][j] = dist[i][k] + dist[k][j]
    print_so(dist)
    
graph = [
    [0, 3, float('inf'), 7],
    [8, 0, 2, float('inf')],
    [5, float('inf'), 0, 1],
    [2, float('inf'), float('inf'), 0]
]

floyd_warshall(graph)
# DOCUMENTATIONS

## Explanation of how the data structures are defined
The program represents an undirected graph using an adjacency matrix. The adjacency matrix is a two-dimensional array where each element indicates whether an edge exists between two vertices. If there is an edge between vertex u and vertex v, the matrix entry at position u and v is set to 1. Since the graph is undirected, the matrix is symmetric and both adj[u][v] and adj[v][u] are set to 1. A visited array is used to keep track of the vertices that have already been visited during traversal.


## Description of the functions implemented and their purpose
-The createGraph function initializes the adjacency matrix and accepts user input for the number of vertices and edges. It fills the matrix by marking connections between vertices for each edge entered.

-The BFS function performs Breadth First Search traversal starting from a given vertex. It uses a queue to visit vertices level by level and marks each visited vertex to avoid repeated visits.

-The DFS function performs Depth First Search traversal using recursion. It explores a vertex and then recursively visits all unvisited adjacent vertices until all reachable vertices are traversed.


## Overview of how the main method is organized
The main function first calls the createGraph function to build the adjacency matrix representation of the graph. It then asks the user for a starting vertex and performs BFS traversal. After resetting the visited array, the program again asks for a starting vertex and performs DFS traversal. The main function demonstrates both traversal techniques on the same undirected graph.


## Sample output of a complete run of the program
Enter number of vertices: 5
Enter number of edges: 6
Enter edge (u v): 0 1
Enter edge (u v): 0 2
Enter edge (u v): 1 3
Enter edge (u v): 1 4
Enter edge (u v): 2 4
Enter edge (u v): 3 4
BFS traversal:
0 1 2 3 4
DFS traversal:
0 1 3 4 2
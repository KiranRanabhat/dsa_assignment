# Implementation of Dijkstra’s Algorithm for Shortest Path in a Weighted Graph

## Explanation of how the data structures are defined
The program represents a weighted graph using an adjacency matrix. The matrix stores the weight of the edge between two vertices. If there is no direct edge between two vertices, the matrix entry is set to zero. An array named distance is used to store the shortest distance from the source vertex to all other vertices. Another array named visited is used to mark the vertices that have already been processed by the algorithm.


## Description of the functions implemented and their purpose
-The minDistance function selects the unvisited vertex with the minimum distance value. This function helps in choosing the next vertex to be included in the shortest path tree.

-The dijkstra function implements Dijkstra’s shortest path algorithm. It initializes all distances to a large value and then repeatedly selects the vertex with the minimum distance. The distance values of adjacent vertices are updated if a shorter path is found through the selected vertex.


## Overview of how the main method is organized
The main function accepts input for the number of vertices and edges. It initializes the adjacency matrix and stores the weights of the edges. The user provides the source vertex from which the shortest paths are to be calculated. The dijkstra function is then called to compute and display the shortest distance from the source to all other vertices.


## Sample output of a complete run of the program
Enter number of vertices: 5
Enter number of edges: 6
Enter edge (u v weight): 0 1 2
Enter edge (u v weight): 0 2 4
Enter edge (u v weight): 1 2 1
Enter edge (u v weight): 1 3 7
Enter edge (u v weight): 2 4 3
Enter edge (u v weight): 3 4 1
Shortest distances from source 0:
To vertex 0 = 0
To vertex 1 = 2
To vertex 2 = 3
To vertex 3 = 7
To vertex 4 = 6
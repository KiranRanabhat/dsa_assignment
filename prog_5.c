#include <stdio.h>
#define MAX 10

int adj[MAX][MAX];
int visited[MAX];
int vertices;

// Function to create adjacency matrix
void createGraph() {
    int edges, u, v;
    printf("Enter number of vertices: ");
    scanf("%d", &vertices);
    printf("Enter number of edges: ");
    scanf("%d", &edges);
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            adj[i][j] = 0;
        }
    }
    for (int i = 0; i < edges; i++) {
        printf("Enter edge (u v): ");
        scanf("%d %d", &u, &v);
        adj[u][v] = 1;
        adj[v][u] = 1;   // Undirected graph
    }
}

// BFS traversal
void BFS(int start) {
    int queue[MAX];
    int front = 0, rear = 0;
    for (int i = 0; i < vertices; i++)
        visited[i] = 0;
    visited[start] = 1;
    queue[rear++] = start;
    printf("BFS traversal: ");
    while (front < rear) {
        int current = queue[front++];
        printf("%d ", current);

        for (int i = 0; i < vertices; i++) {
            if (adj[current][i] == 1 && !visited[i]) {
                visited[i] = 1;
                queue[rear++] = i;
            }
        }
    }
    printf("\n");
}

// DFS traversal (recursive)
void DFS(int node) {
    visited[node] = 1;
    printf("%d ", node);
    for (int i = 0; i < vertices; i++) {
        if (adj[node][i] == 1 && !visited[i]) {
            DFS(i);
        }
    }
}

int main() {
    int start;
    createGraph();
    printf("Enter starting vertex for BFS: ");
    scanf("%d", &start);
    BFS(start);
    for (int i = 0; i < vertices; i++)
        visited[i] = 0;
    printf("Enter starting vertex for DFS: ");
    scanf("%d", &start);
    printf("DFS traversal: ");
    DFS(start);
    printf("\n");
    return 0;
}

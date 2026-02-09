#include <stdio.h>
#define MAX 10
#define INF 9999

int graph[MAX][MAX];
int distance[MAX];
int visited[MAX];
int vertices;

// Find vertex with minimum distance
int minDistance() {
    int min = INF, index = -1;
    for (int i = 0; i < vertices; i++) {
        if (!visited[i] && distance[i] < min) {
            min = distance[i];
            index = i;
        }
    }
    return index;
}

// Dijkstra algorithm
void dijkstra(int source) {
    for (int i = 0; i < vertices; i++) {
        distance[i] = INF;
        visited[i] = 0;
    }
    distance[source] = 0;
    for (int count = 0; count < vertices - 1; count++) {
        int u = minDistance();
        if (u == -1)
            break;
        visited[u] = 1;
        for (int v = 0; v < vertices; v++) {
            if (!visited[v] && graph[u][v] != 0 &&
                distance[u] + graph[u][v] < distance[v]) {
                distance[v] = distance[u] + graph[u][v];
            }
        }
    }
    printf("Shortest distances from source %d:\n", source);
    for (int i = 0; i < vertices; i++) {
        printf("To vertex %d = %d\n", i, distance[i]);
    }
}

int main() {
    int edges, u, v, w, source;
    printf("Enter number of vertices: ");
    scanf("%d", &vertices);
    printf("Enter number of edges: ");
    scanf("%d", &edges);
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            graph[i][j] = 0;
        }
    }
    for (int i = 0; i < edges; i++) {
        printf("Enter edge (u v weight): ");
        scanf("%d %d %d", &u, &v, &w);
        graph[u][v] = w;
        graph[v][u] = w;
    }
    printf("Enter source vertex: ");
    scanf("%d", &source);
    dijkstra(source);
    return 0;
}

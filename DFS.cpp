#include <stdio.h>

int adj[100][100], visited[100], n;

void dfs(int v) {
    visited[v] = 1;
    printf("%d ", v); // visit the node

    for (int i = 0; i < n; i++) {
        if (adj[v][i] && !visited[i])
            dfs(i); // recursive DFS call
    }
}

int main() {
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &adj[i][j]);

    int start;
    printf("Enter starting vertex: ");
    scanf("%d", &start);

    printf("DFS traversal: ");
    dfs(start);

    return 0;
}


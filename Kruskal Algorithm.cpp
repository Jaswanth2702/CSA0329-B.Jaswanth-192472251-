#include <stdio.h>
#include <stdlib.h>

#define V 5
#define E 7

struct Edge {
    int src, dest, weight;
};

struct Edge edge[E] = {
    {0, 1, 2},
    {0, 3, 6},
    {1, 2, 3},
    {1, 3, 8},
    {1, 4, 5},
    {2, 4, 7},
    {3, 4, 9}
};

int parent[V];

int find(int i) {
    if (parent[i] == -1)
        return i;
    return find(parent[i]);
}

void unionSet(int x, int y) {
    int xset = find(x);
    int yset = find(y);
    if (xset != yset)
        parent[xset] = yset;
}

int compare(const void* a, const void* b) {
    struct Edge* a1 = (struct Edge*)a;
    struct Edge* b1 = (struct Edge*)b;
    return a1->weight > b1->weight;
}

void kruskalMST() {
    struct Edge result[V];  
    int e = 0;  
    
    qsort(edge, E, sizeof(edge[0]), compare);

    for (int i = 0; i < V; i++)
        parent[i] = -1;

    for (int i = 0; i < E && e < V - 1; i++) {
        int x = find(edge[i].src);
        int y = find(edge[i].dest);

        if (x != y) {
            result[e++] = edge[i];
            unionSet(x, y);
        }
    }

    printf("Edge \tWeight\n");
    for (int i = 0; i < e; i++)
        printf("%d - %d \t%d\n", result[i].src, result[i].dest, result[i].weight);
}

int main() {
    kruskalMST();
    return 0;
}


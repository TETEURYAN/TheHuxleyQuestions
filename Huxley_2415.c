#include <stdio.h>
#include <stdlib.h>

//2415 - Menor caminho em um grafo
//https://thehuxley.com/problem/2415

typedef struct node node;
typedef struct graph graph;

struct node {
    int item;
    node *next;
};

struct graph {
    int directed;
    node **vertices;
    short *visited;
};

node* create_node(int item) {
    node *new_node = (node*)malloc(sizeof(node));
    new_node->item = item;
    new_node->next = NULL;
    return new_node;
}

graph* create_graph(int num_vertexes, int directed) {
    int i;
    graph *new_graph = (graph*)malloc(sizeof(graph));
    new_graph->vertices = (node**)malloc(num_vertexes * sizeof(node*));
    new_graph->visited = (short*)malloc(num_vertexes * sizeof(short));

    for(i = 0 ; i < num_vertexes ; i++) {
        new_graph->vertices[i] = NULL;
        new_graph->visited[i] = 0;
    }
    new_graph->directed = directed;
    return new_graph;
}

void add_edge(graph *g, int vertex1, int vertex2) {
    node *vertex = create_node(vertex2);
    vertex->next = g->vertices[vertex1];
    g->vertices[vertex1] = vertex;

    if(!g->directed) {
        vertex = create_node(vertex1);
        vertex->next = g->vertices[vertex2];
        g->vertices[vertex2] = vertex;
    }
}

void print_graph(graph *g, int num_vertexes) {
    node *current = NULL;
    int i;
    for(i = 0 ; i < num_vertexes ; i++) {
        printf("[%d] ---> ", i);
        current = g->vertices[i];
        while(current != NULL) {
            if(current->next != NULL) {
                printf("%d -> ", current->item);
            }
            else {
                printf("%d", current->item);
            }
            current = current->next;
        }
        printf("\n");
    }
}

void dfs(graph *g, int start, int end, int len, int *min_len) {
    if(start == end) {
        if(len < *min_len) {
            *min_len = len;
        }
        return;
    }
    g->visited[start] = 1;
    node *current = g->vertices[start];

    while(current != NULL) {
        if(!g->visited[current->item]) {
            dfs(g, current->item, end, len + 1, min_len);
        }
        current = current->next;
    }
    g->visited[start] = 0;
}

int main() {

    int num_vertexes, num_edges;
    int i, v1, v2, start, end;
    int min_len = 1000000;

    scanf("%d %d", &num_vertexes, &num_edges);
    graph *g = create_graph(num_vertexes, 1);

    for(i = 0 ; i < num_edges ; i++) {
        scanf("%d %d", &v1, &v2);
        add_edge(g, v1, v2);
    }
    scanf("%d %d", &start, &end);
    dfs(g, start, end, 0, &min_len);
    printf("Tamanho do menor caminho de G: %d\n", min_len);

    return 0;
}

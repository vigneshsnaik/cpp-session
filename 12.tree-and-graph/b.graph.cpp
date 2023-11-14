#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXSIZE 20
typedef struct node {
    struct node *next;
    int data;
} Node;
bool *visitedBFS, *visitedDFS;
Node *QBFS;
Node *createNode(int);
bool isEmpty(Node *);
void enqueue(Node *, int);
int dequeue(Node *);
int **readAdjMatrix(int n);
void printAdjMatrix(int **, int);
void DFS(int **, int, int);
void BFS(int **, int);
bool *initvisited(int);
int main() {
    int i, j, n;
    printf("Enter number of vertices : ");
    scanf("%d", &n);
    printf("\n");
    printf("Enter the verices adjacent to the vertex sperated by \",\" in one "
           "line\n");
    int **adjMatrix = readAdjMatrix(n);
    printf("\n");
    printAdjMatrix(adjMatrix, n);
    printf("\n");
    visitedBFS = initvisited(n);
    printf("BFS :");
    BFS(adjMatrix, n);
    printf("\n");
    printf("\n");
    visitedDFS = initvisited(n);
    printf("DFS :");
    DFS(adjMatrix, n, 0);
    printf("\n");
    free(adjMatrix);
    free(visitedBFS);
    free(visitedDFS);
    free(QBFS);
    return 0;
}
Node *createNode(int data) {
    Node *n = (Node *)malloc(sizeof(Node));
    n->data = data;
    n->next = NULL;
    return n;
}
bool isEmpty(Node *Head) {
    if (Head->next == NULL)
        return true;
    return false;
}
void enqueue(Node *Head, int data) {
    Node *n = createNode(data);
    Node *temp = Head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = n;
}
int dequeue(Node *Head) {
    Node *del = Head->next;
    Head->next = Head->next->next;
    int val = del->data;
    free(del);
    return val;
}
int **readAdjMatrix(int n) {
    int tempVert, i, j;
    int **mat = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        mat[i] = (int *)malloc(n * sizeof(int));
    }
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            mat[i][j] = 0;
    char *temp, val[20];
    for (i = 0; i < n; i++) {
        printf("Vertices adjacent to %2d : ", i);
        scanf("%s", val);
        temp = strtok(val, ",");
        while (temp != NULL) {
            tempVert = atoi(temp);
            if (tempVert < n) {
                mat[i][tempVert] = 1;
                mat[tempVert][i] = 1;
            } else
                printf("%d Invalid adjacency, OMITTED!!!!\n");
            temp = strtok(NULL, ",");
        }
    }
    return mat;
}
bool *initvisited(int n) {
    int i;
    bool *arr = (bool *)malloc(n * sizeof(bool *));
    for (i = 0; i < n; i++)
        arr[i] = false;
    return arr;
}
void printAdjMatrix(int **mat, int n) {
    int i, j;
    printf("Adjacency Matrix\n V|");
    for (i = 0; i < n; i++) {
        printf("%3d", i);
    }
    printf("\n--|");
    for (i = 0; i < n; i++) {
        printf("---");
    }
    printf("\n");
    for (i = 0; i < n; i++) {
        printf("%2d|", i);
        for (j = 0; j < n; j++)
            printf("%3d", mat[i][j]);
        printf("\n");
    }
}
void BFS(int **mat, int n) {
    int curr;
    QBFS = (Node *)malloc(sizeof(Node));
    enqueue(QBFS, 0);
    visitedBFS[0] = true;
    while (!isEmpty(QBFS)) {
        curr = dequeue(QBFS);
        printf("%3d", curr);
        for (int i = 0; i < n; i++) {
            if (mat[curr][i] && !visitedBFS[i]) {
                visitedBFS[i] = true;
                enqueue(QBFS, i);
            }
        }
    }
}
void DFS(int **mat, int n, int curr) {
    visitedDFS[curr] = true;
    printf("%3d", curr);
    for (int i = 0; i < n; i++) {
        if (mat[curr][i] && !visitedDFS[i]) {
            visitedDFS[i] = true;
            DFS(mat, n, i);
        }
    }
}
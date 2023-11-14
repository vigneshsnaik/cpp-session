#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    int data;
    struct node *l;
    struct node *r;
} Node;

Node *createNode(int data) {
    Node *n = (Node *)malloc(sizeof(Node));
    n->data = data;
    n->l = NULL;
    n->r = NULL;
    return n;
}

Node *insertIntoBST(Node *n, int data) {
    if (n == NULL)
        return createNode(data);
    else if (data < n->data)
        n->l = insertIntoBST(n->l, data);
    else if (data > n->data)
        n->r = insertIntoBST(n->r, data);
    return n;
}
void inOrder(Node *n) {
    if (n != NULL) {
        inOrder(n->l);
        printf("%d ", n->data);
        inOrder(n->r);
    }
}
void preOrder(Node *n) {
    if (n != NULL) {
        printf("%d ", n->data);
        preOrder(n->l);
        preOrder(n->r);
    }
}
void postOrder(Node *n) {
    if (n != NULL) {
        postOrder(n->l);
        postOrder(n->r);
        printf("%d ", n->data);
    }
}

int main() {}
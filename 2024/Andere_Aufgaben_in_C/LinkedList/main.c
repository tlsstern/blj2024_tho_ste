#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    int data;
    struct Node *next;
    struct Node *previous;
}TNode;

void main() {
    TNode * Nodes;
    Nodes = (TNode*)malloc(sizeof(TNode));



    free(Nodes);

}
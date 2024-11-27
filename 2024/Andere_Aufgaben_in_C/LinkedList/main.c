#include <stdio.h>
#include <stdlib.h>
#include "tnode.h"

int main() {
    TNode* head = (TNode*)malloc(sizeof(TNode));
    head->data = 1;
    head->next = NULL;

    TNode* second = (TNode*)malloc(sizeof(TNode));
    second->data = 2;
    second->next = NULL;
    head->next = second;

    TNode* third = (TNode*)malloc(sizeof(TNode));
    third->data = 3;
    third->next = NULL;
    second->next = third;

    TNode* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    printf("Letzter Node: %d\n", current->data);

    printf("Liste: ");
    printList(head);

    TNode* newHead = createNode(4);
    appendNode(&newHead, 5);
    appendNode(&newHead, 6);
    printf("Neue Liste: ");
    printList(newHead);

    removeNode(&newHead, 1);
    printf("Neue Liste nach removeNode: ");
    printList(newHead);

    insertNode(&newHead, 7, 1);
    printf("Neue Liste nach insertNode: ");
    printList(newHead);

    printf("Data an Index 2: %d\n", getNodeData(newHead, 2));

    setNodeData(newHead, 8, 2);
    printf("Neue Liste nach setNodeData: ");
    printList(newHead);

    setAllNodesData(newHead, 9);
    printf("Neue Liste nach setAllNodesData: ");
    printList(newHead);

    printf("Laenge der Liste: %d\n", getListLength(newHead));

    deleteList(&newHead);
    deleteList(&head);

    return 0;
}
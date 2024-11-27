//
// Created by Work on 27/11/2024.
//

#ifndef TNODE_H
#define TNODE_H

typedef struct TNode {
    int data;
    struct TNode* next;
} TNode;

TNode* createNode(int data);
void printList(TNode* head);
void appendNode(TNode** head, int data);
void removeNode(TNode** head, int index);
void insertNode(TNode** head, int data, int index);
int getNodeData(TNode* head, int index);
void setNodeData(TNode* head, int data, int index);
void setAllNodesData(TNode* head, int data);
int getListLength(TNode* head);
void deleteList(TNode** head);

#endif

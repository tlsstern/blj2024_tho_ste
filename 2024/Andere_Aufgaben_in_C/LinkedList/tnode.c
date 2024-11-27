// tnode.c

#include <stdio.h>
#include <stdlib.h>
#include "tnode.h"

TNode* createNode(int data) {
  TNode* newNode = (TNode*)malloc(sizeof(TNode));
  if (newNode == NULL) {
    fprintf(stderr, "Speicherallokierung fehlgeschlagen!\n");
    exit(1);
  }
  newNode->data = data;
  newNode->next = NULL;
  return newNode;
}

void printList(TNode* head) {
  TNode* current = head;
  while (current != NULL) {
    printf("%d ", current->data);
    current = current->next;
  }
  printf("\n");
}

void appendNode(TNode** head, int data) {
  TNode* newNode = createNode(data);
  if (*head == NULL) {
    *head = newNode;
    return;
  }
  TNode* current = *head;
  while (current->next != NULL) {
    current = current->next;
  }
  current->next = newNode;
}

void removeNode(TNode** head, int index) {
  if (*head == NULL) {
    return;
  }
  if (index == 0) {
    TNode* temp = *head;
    *head = (*head)->next;
    free(temp);
    return;
  }
  TNode* current = *head;
  for (int i = 0; i < index - 1 && current != NULL; i++) {
    current = current->next;
  }
  if (current == NULL || current->next == NULL) {
    return;
  }
  TNode* temp = current->next;
  current->next = current->next->next;
  free(temp);
}

void insertNode(TNode** head, int data, int index) {
  TNode* newNode = createNode(data);
  if (index == 0) {
    newNode->next = *head;
    *head = newNode;
    return;
  }
  TNode* current = *head;
  for (int i = 0; i < index - 1 && current != NULL; i++) {
    current = current->next;
  }
  if (current == NULL) {
    return;
  }
  newNode->next = current->next;
  current->next = newNode;
}

int getNodeData(TNode* head, int index) {
  TNode* current = head;
  for (int i = 0; i < index && current != NULL; i++) {
    current = current->next;
  }
  if (current == NULL) {
    return -1;
  }
  return current->data;
}

void setNodeData(TNode* head, int data, int index) {
  TNode* current = head;
  for (int i = 0; i < index && current != NULL; i++) {
    current = current->next;
  }
  if (current == NULL) {
    return;
  }
  current->data = data;
}

void setAllNodesData(TNode* head, int data) {
  TNode* current = head;
  while (current != NULL) {
    current->data = data;
    current = current->next;
  }
}

int getListLength(TNode* head) {
  int length = 0;
  TNode* current = head;
  while (current != NULL) {
    length++;
    current = current->next;
  }
  return length;
}

void deleteList(TNode** head) {
  TNode* current = *head;
  while (current != NULL) {
    TNode* next = current->next;
    free(current);
    current = next;
  }
  *head = NULL;
}
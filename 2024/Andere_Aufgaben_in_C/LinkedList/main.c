#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct TNode {
    char data[100];
    char moredata[100];
};

int main() {

    struct TNode* newNode = malloc(sizeof(struct TNode));

    if (newNode == NULL) {
        fprintf(stderr, "Speicherallokierung fehlgeschlagen!\n");
        return 1;
    }


    free(newNode);

    return 0;
}
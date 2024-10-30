#include <stdio.h>
#include "lightsout.h"

#define SIZE 5

int main(void) {
    int counter = 0;
    int light_out[SIZE][SIZE] = {{0}};
    printField(light_out);

    int win;
    do {
        win = lightsoff(light_out);
        counter += 1;
        printf("Times clicked = %d\n", counter);
    } while (win == 1);

    printf("You won!\n");
    return 0;
}

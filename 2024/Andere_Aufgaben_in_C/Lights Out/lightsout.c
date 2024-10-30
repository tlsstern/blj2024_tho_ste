#include "lightsout.h"
#include <stdio.h>

int lightsoff(int light_out[SIZE][SIZE]) {
    int cordX, cordY;

    printf("Lightsout\nTurn off all the lights (1)\n\n");
    printf("Please enter your Row:\n");
    cordX:
    if (scanf("%d", &cordX) != 1 || cordX <=1 || cordX >= SIZE) {
        printf("Invalid Input\n");
        fflush(stdin);
        goto cordX;
    }
    cordX -= 1;
    cordY:
    if (scanf("%d", &cordY) != 1 || cordY <= 1 || cordY >= SIZE) {
        printf("Invalid Input\n");
        fflush(stdin);
        goto cordY;
    }
    cordY -= 1;

    changeLight(cordX, cordY, light_out);

    if (cordX > 0) {
        changeLight(cordX - 1, cordY, light_out);
    }
    if (cordX < SIZE - 1) {
        changeLight(cordX + 1, cordY, light_out);
    }
    if (cordY > 0) {
        changeLight(cordX, cordY - 1, light_out);
    }
    if (cordY < SIZE - 1) {
        changeLight(cordX, cordY + 1, light_out);
    }

    printf("\n\n");
    printField(light_out);
    int result = checkwin(light_out);
    return result;
}

void changeLight(int x, int y, int light_out[SIZE][SIZE]) {
    light_out[x][y] = (light_out[x][y] == 0) ? 1 : 0;
}

int checkwin(int light_out[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (light_out[i][j] == 0) {
                return 1;
            }
        }
    }
    return 0;
}

void printField(int light_out[SIZE][SIZE]) {
    for (int j = 0; j < SIZE; j++) {
        printf("+---");
    }
    printf("+\n");
    for (int i = 0; i < SIZE; i++) {
        printf("|");
        for (int j = 0; j < SIZE; j++) {
            printf(" %d |", light_out[i][j]);
        }
        printf("\n");
        for (int j = 0; j < SIZE; j++) {
            printf("+---");
        }
        printf("+\n");
    }
}
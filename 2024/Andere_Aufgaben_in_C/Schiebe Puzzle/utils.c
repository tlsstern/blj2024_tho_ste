#include <stdio.h>
#include "utils.h"

/**
 * This function prints the given board state in an aesthetically pleasing way.
 * 
 * @param size  The size (both width and height) of the board.
 * @param field The board (2D array) to be printed.
 */


void move();

void printField(int size, int field[size][size]) {
    printf("\n+----+----+----+----+\n");
    for (int row = 0; row < size; row++) {
        printf("| ");
        for (int col = 0; col < size; col++) {
            if (field[row][col] != 0) {
                printf("%2d | ", field[row][col]);
            } else {
                printf("   | ");
            }
        }
        printf("\n+----+----+----+----+\n");
    }

    printf("+---------------+-------------+---------------+----------------+---------+\n");
    printf("| 1: Slide Left | 2: Slide Up | 3: Slide Down | 4: Slide Right | 0: Quit |\n");
    printf("+---------------+-------------+---------------+----------------+---------+\n");
}

/**
 * This function swaps the values of two given variables using their addresses.
 * 
 * @param num1  The address of the first variable.
 * @param num2  The address of the second variable.
 */
void swapValues(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void move(int move, int field[FIELD_SIZE][FIELD_SIZE]) {
    int cordX = 0, cordY = 0;
    for (int i = 0; i < FIELD_SIZE; i++) {
        for (int j = 0; j < FIELD_SIZE; j++) {
            if (field[i][j] == 0) {
                cordX = i;
                cordY = j;
            }
        }
    }
    if (move == 1) {
        // left
        if (cordY > 0) {
            cordY--;
            swapValues(&field[cordX][cordY], &field[cordX][cordY + 1]);
        } else {
            printf("You cannot move left\n");
        }
    } else if (move == 2) {
        // up
        if (cordX > 0) {
            cordX--;
            swapValues(&field[cordX][cordY], &field[cordX + 1][cordY]);
        } else {
            printf("You cannot move up\n");
        }
    } else if (move == 3) {
        // Down
        if (cordX < FIELD_SIZE - 1) {
            cordX++;
            swapValues(&field[cordX][cordY], &field[cordX - 1][cordY]);
        } else {
            printf("You cannot move down\n");
        }
    } else if (move == 4) {
        // Right
        if (cordY < FIELD_SIZE - 1) {
            cordY++;
            swapValues(&field[cordX][cordY], &field[cordX][cordY - 1]);
        } else {
            printf("You cannot move right\n");
        }
    }
    else {
        printf("Invalid Input\n");
    }
}
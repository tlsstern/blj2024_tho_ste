#include <stdio.h>
#include <stdlib.h>

#include "utils.h"

#define FIELD_SIZE 4

/**
 * This programm depicts an all-time classic, the sliding puzzle. The one and
 * only 0 represents the empty slot in the sliding puzzle. Moves (sliding up,
 * down, left, right) are always made relative to the empty slot e.g. in the
 * case of the initial state of the field, only the moves left (swap 0 with 15)
 * and up (swap 0 with 8) can be made. This programm doesn't detect whether the
 * field is sorted. It runs as long as the user doesn't enter a 0.
 *
 * @return 0 if the programm was successfully run.
 */

int main(void) {
    int field[FIELD_SIZE][FIELD_SIZE] = {

        { 0, 15,  1, 13},
        { 8,  5,  2,  3},
        {14,  7,  4,  9},
        {10, 11,  6, 12},
    };
    const int win[FIELD_SIZE][FIELD_SIZE] = {
        { 1,  2,  3,  4},
        { 4,  6,  7,  8},
        { 9, 10, 11, 12},
        {13, 14, 15,  0},
    };

    scramble(field);

    int input = 0;

    do {
        printField(FIELD_SIZE, field);


        // TODO: Implement the rules for the sliding puzzle. In other words,
        // swap neighboured values (horizontally or vertically) in the 2D array
        // based on user input, but only if the move is legal (bounds checking).
        start:
        if (scanf("%d", &input) != 1) {
            printf("Invalid input\n");
            fflush(stdin);
            goto start;
        }


        if (input >= 1 && input <= 4) {
            move(input, field);
        } else if (input == 0) {
            printf("Thank you for playing\n");
            exit(1);
        } else {
            printf("Invalid input\n");
            goto start;
        }
        int match = 1;

        for (int i = 0; i < FIELD_SIZE; i++) {
            for (int j = 0; j < FIELD_SIZE; j++) {
                if (field[i][j] != win[i][j]) {
                    match = 0;
                    break;
                }
            }
        }

        if (match == 1) {
            printf("Thank you for playing you have won\n");
            exit(1);
        }

    } while (input != 0);
}

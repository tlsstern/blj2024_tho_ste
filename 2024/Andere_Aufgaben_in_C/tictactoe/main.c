#include <stdio.h>
#define arr_len = 3;

void board(int move);

int main(void) {
    int move = 1;
    int ended = 1;

    printf("Welcome to Tic-Tac-Toe!\n");

    while (ended == 1) {
        printf("Player %d, it's your move\n", move);
        board(move);



        if (move == 1) {
            move = 2;
        } else {
            move = 1;
        }
    }
}

void board(int move) {
    int cord1, cord2;
    static int tictactoe[3][3] = {{0}};
    ask:
    printf("Enter your first coordinate (colum):\n");
    scanf("%d", &cord1);
    cord1--;
    printf("Enter your second coordinate (row):\n");
    scanf("%d", &cord2);
    cord2--;
    if (tictactoe[cord1][cord2] != 0) {
        printf("This is not an empty space\n");
        fflush(stdin);
        goto ask;
    }
    tictactoe[cord1][cord2] = move;


    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf("%d | ", tictactoe[i][0]);
        for (int j = 1; j < 3; j++) {
            printf("%d | ", tictactoe[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
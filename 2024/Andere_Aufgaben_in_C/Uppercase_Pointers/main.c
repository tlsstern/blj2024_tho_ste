#include <stdlib.h>
#include <time.h>
#include <stdio.h>



int *getRandomNums(unsigned int n, int max, int min) {
    int *nums = malloc(n * sizeof(int));
    srand(time(NULL));


    if (nums == NULL) {
        printf("Memory allocation failed for nums\n");
        exit(69);
    }

    for(int i = 0; i < n; i++) {
            *(nums + i) = (rand() % max) + 1;
    }
    return nums;
}

int main() {
    int n;
    int max;
    int min;
    printf("How many random numbers:");
    scanf(" %d", &n);
    printf("From what number to what number do you want to randomize?\nMaximum:");
    scanf(" %d", &max);
    printf("Minimum:");
    scanf(" %d", &min);
    int *p_nums = getRandomNums(n, max, min);

    printf("Your random Numbers:\n");
    for (int i = 0; i < n; i++) {
        printf("%d \n", *(p_nums + i));
    }

    free(p_nums);
}
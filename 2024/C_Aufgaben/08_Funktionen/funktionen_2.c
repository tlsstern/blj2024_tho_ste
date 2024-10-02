#include <stdio.h>
void binRead();

int main() {
    binRead();

    return 0;
}
void binRead() {
    int binNumber;
    printf("Please enter a binary-number: ");
    scanf("%d", &binNumber);
    int deciNumber = 0;
    int base = 1;

    while (binNumber != 0) {
        int last_digit = binNumber % 10;
        deciNumber += last_digit * base;
        binNumber /= 10;
        base *= 2;
    }

    printf("Decimal output: %d\n", deciNumber);
}
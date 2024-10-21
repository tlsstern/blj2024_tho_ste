#include <stdio.h>
#include <string.h>

void vorbereitung();

void binPrint();

int main(void) {
    vorbereitung();
    binPrint();
}

void vorbereitung() {
    int x = 23;
    int y = 7;
    double p = 33.333;
    double q = 3.001;
    int a = 1;
    int b = 2;
    int c = 3;
}

void binPrint(int n) {
    char b[100];
    char *p = b;
    char *pStr = p;

    if (n <= 0) {
        printf("Number not valid!");
        return;
    }

    do {
        if (n % 2 == 0) {
            *p = '0';
        } else {
            *p = '1';
        }
        p++;
        n = n / 2;
    } while (n > 0);

    *p = '\0';
    _strrev(pStr);
    printf("%d = %s\n", n, b);
}

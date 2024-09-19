#include <stdio.h>
#include <string.h>

void binPrint();

int main(void) {
    char b[100];
    int dezNumber = 0;
    printf("Enter a number: ");
    scanf("%d", &dezNumber);
    binPrint(dezNumber, b);
    printf("%d = %s\n", dezNumber, b);

    return 0;
}


void binPrint(int n, char * p){
    //set a pointer
    char * pStr = p;
    if (0 >= p) {
        printf("Number not valid!");
        return;
    }
    do {
        if (n%2 == 0) {
            *p = '0';
        }
        else {
            *p = '1';
        }
        p++;
        n = n / 2;
    } while (n > 0);
    *p = '\0';
    // reverse String
    _strrev(pStr);

}

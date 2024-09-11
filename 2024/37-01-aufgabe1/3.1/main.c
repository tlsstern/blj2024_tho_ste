#include <stdio.h>

int main(void) {
    printf("Thomas Stern\nTalstrasse 8\nZollikon \nSchweiz \n+41 77 528 38 89\n \n");

    char c = 'p';
    int i = 32000;
    short s = 324;
    long l = 328932;
    float f = 3.141593;
    double d = 2.717200;

    printf("Speicherbedarf char: %c Byte(s)\n", sizeof(char));
    printf("Speicherbedarf int: %d Byte(s)\n", sizeof(int));
    printf("Speicherbedarf short: %d Byte(s)\n", sizeof(short));
    printf("Speicherbedarf long: %d Byte(s)\n", sizeof(long));
    printf("Speicherbedarf float: %f Byte(s)\n", sizeof(float));
    printf("Speicherbedarf double: %d Byte(s)\n", sizeof(double));
    // %d ist für Zahl und %c ist für Buchstabe
    printf("Werte der Variabelen\n");
    printf("-------------------------------------------------------\n");
    printf("\t Zeichen\t dez\t hex\t okt\n");
    printf("-------------------------------------------------------\n");
    printf("c [char] \t 'P' ");



    return 0;

}

#include <stdio.h>

int main(void) {
    printf("Thomas Stern\nTalstrasse 8\nZollikon \nSchweiz \n+41 77 528 38 89\n \n");

    char c = 'p';
    int i = 32000;
    short s = 324;
    long l = 328932;
    float f = 3.141593;
    double d = 2.717200;

    printf("Speicherbedarf char: %d Byte(s)\n", sizeof(char));
    printf("Speicherbedarf int: %d Byte(s)\n", sizeof(int));
    printf("Speicherbedarf short: %d Byte(s)\n", sizeof(short));
    printf("Speicherbedarf long: %d Byte(s)\n", sizeof(long));
    printf("Speicherbedarf float: %f Byte(s)\n", sizeof(float));
    printf("Speicherbedarf double: %d Byte(s)\n", sizeof(double));
    // %d ist für Zahl und %c ist für Buchstabe
    printf("Werte der Variabelen\n");
    printf("----------------------------------------------------------------------------------------------\n");
    printf("Variabele\t\t Zeichen\t\t dez\t\t hex\t\t okt\n");
    printf("----------------------------------------------------------------------------------------------\n");
    printf("c [char] \t\t'P'\t\t80\t\t50\t\t120\n");
    printf("c [char] \t\t'x'\t\t120\t\t78\t\t170\n");
    printf("s [short] \t\t\t\t324\t\t144\t\t504\n");
    printf("i [int] \t\t\t\t32000\t\tc80\t\t6200\n");
    printf("l [long] \t\t\t\t328932\t\t504e4\t\t1202344\n");
    printf("f [float] \t\t\t\t3.141593\t80000000\t10002220773\n");
    printf("d [double] \t\t\t\t2.717200\t5a858794\t10001336323\n");



    return 0;

}

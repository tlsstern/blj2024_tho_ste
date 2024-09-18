#include <stdio.h>

int main(void) {
    printf("Thomas Stern\nTalstrasse 8\nZollikon \nSchweiz \n+41 77 528 38 89\n \n");

    char c1 = 'P';
    char c2 ='x';
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
    printf("c [char]\t %c\t\t %d\t\t %x\t\t %o\t\n", c1, c1, c1, c1);
    printf("c [char]\t %c\t\t %d\t\t %x\t\t %o\t\n", c2, c2, c2, c2);
    printf("s [short]\t\t\t %d\t\t %x\t\t %o\t\n", i, i, i);
    printf("i [int]\t\t\t\t %d\t\t %x\t\t %o\t\n", s, s, s);
    printf("l [long]\t\t\t %d\t\t %x\t\t %o\t\n", l, l, l);
    printf("f [float]\t\t\t %f\t %x\t %o\t\n", f, f, f);
    printf("d [double]\t\t\t %f\t %x\t %o\t\n", d, d, d);

    unsigned char uc = 258;

    printf("This is the size of %d\n",uc);

    // Es Zeigt nur 2 weil nach 256 zählt es wieder rauf

    return 0;

}

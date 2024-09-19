#include <stdio.h> // Interpretiert commands in C, wie printf() und scanf(). Es wird auch gebraucht für öffnen und schliessen von files
#include <stdbool.h>

void anrede1();
void anrede2();
void anrede3(); // anrede3 muss mit void anrede3 von unter heraufgezogen werden.
bool anrede4();

void main() {
    anrede1();
    anrede2(0);
    anrede2(1);
    anrede3(1);
    printf("Aufgabe 7\n");
    const char true_false = anrede4(2);
    printf("anrede 4 ist%c \n",true_false);
}

void anrede1() {
    printf("Aufgabe 1\n");
    printf("Guten Tag Herr XY\n");
}

void anrede2(int wert) {
    printf("Aufgabe 2\n");
    if (wert == 0) {
        printf("Guten Tag Herr XY\n");
    }else {
        printf("Guten Tag Frau XY\n");
    }
}

void anrede3(int wert) {
    printf("Aufgabe 4-6\n");
    if (wert == 0) {
        printf("Guten Tag Herr XY\n");
    }else if (wert == 1) {
        printf("Guten Tag Frau XY\n");
    }else {
        printf("Bitte wehlen sie 0 oder 1");
    }
}

bool anrede4(int b) {
    if (b == 0) {
        printf("Guten Tag Herr XY (false)\n");
        return false;
    }else if (b == 1) {
        printf("Guten Tag Frau XY (true)\n");
        return false;
    }else{
        return true;
    }
}
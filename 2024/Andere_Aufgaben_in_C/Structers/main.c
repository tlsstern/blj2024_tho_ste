#include <stdio.h>
#include <string.h>

typedef struct Person {
    char name[50];
    int gebJahr;
    int gewicht;
    int groesse;
} TPerson;

TPerson family[4];

void initFamily() {
    strcpy(family[0].name, "John Doe");
    family[0].gebJahr = 1981;
    family[0].gewicht = 91;
    family[0].groesse = 196;

    strcpy(family[1].name, "Jane Doe");
    family[1].gebJahr = 1980;
    family[1].gewicht = 64;
    family[1].groesse = 178;

    strcpy(family[2].name, "Jack Doe");
    family[2].gebJahr = 2008;
    family[2].gewicht = 40;
    family[2].groesse = 163;

    strcpy(family[3].name, "Judy Doe");
    family[3].gebJahr = 2015;
    family[3].gewicht = 30;
    family[3].groesse = 124;
}

int main() {
    initFamily();

    for (int i = 0; i < 4; i++) {
        printf("Name: %s\n", family[i].name);
        printf("Geburtsjahr: %d\n", family[i].gebJahr);
        printf("Gewicht: %d kg\n", family[i].gewicht);
        printf("Groesse: %d cm\n\n", family[i].groesse);
    }

    return 0;
}
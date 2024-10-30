#include <stdio.h>
#include <string.h>

typedef struct {
    char name[30];
    char thema[20];
} TClub;

typedef struct {
    char name[50];
    int gebJahr;
    int gewicht;
    int groesse;
    TClub club;
} TPerson;

TPerson family[4];

void initFamily() {
    strcpy(family[0].name, "John Doe");
    family[0].gebJahr = 1981;
    family[0].gewicht = 91;
    family[0].groesse = 196;
    strcpy(family[0].club.name, "FC Zurich");
    strcpy(family[0].club.thema, "Fussball");

    strcpy(family[1].name, "Jane Doe");
    family[1].gebJahr = 1980;
    family[1].gewicht = 64;
    family[1].groesse = 178;
    strcpy(family[1].club.name, "Buchclub");
    strcpy(family[1].club.thema, "Literatur");

    strcpy(family[2].name, "Jack Doe");
    family[2].gebJahr = 2008;
    family[2].gewicht = 40;
    family[2].groesse = 163;
    strcpy(family[2].club.name, "Schachclub");
    strcpy(family[2].club.thema, "Schach");

    strcpy(family[3].name, "Judy Doe");
    family[3].gebJahr = 2015;
    family[3].gewicht = 30;
    family[3].groesse = 124;
    strcpy(family[3].club.name, "Tanzverein");
    strcpy(family[3].club.thema, "Tanzen");
}

void printPerson(TPerson person) {
    printf("Name: %s\n", person.name);
    printf("Geburtsjahr: %d\n", person.gebJahr);
    printf("Gewicht: %d kg\n", person.gewicht);
    printf("Groesse: %d cm\n", person.groesse);
    printf("Lieblingsverein: %s (%s)\n\n", person.club.name, person.club.thema);
}

void printFamily() {
    for (int i = 0; i < 4; i++) {
        printPerson(family[i]);
    }
}

void findOldestFamilyMember() {
    TPerson oldest = family[0];

    for (int i = 1; i < 4; i++) {
        if (family[i].gebJahr < oldest.gebJahr) {
            oldest = family[i];
        }
    }

    printf("Aeltestes Familienmitglied:\n");
    printPerson(oldest);
}

int main() {
    // Familie initialisieren
    initFamily();

    // c) Familie ausgeben
    printFamily();

    // d) Älteste Person finden und ausgeben
    findOldestFamilyMember();

    return 0;
}
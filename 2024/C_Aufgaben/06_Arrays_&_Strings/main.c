#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void wordTwist();
void wordSquare();
void anagram();
void balken();
void balken_stehend();

int BigNum(int arr[], int size);

int main(void) {
    // wordTwist();
    // wordSquare();
    // anagram();
    // balken();
    balken_stehend();
    return 0;
}

//6.2.1
void wordTwist() {
    unsigned char word[100];
    printf("Enter word: \n");
    scanf("%s", word);
    _strrev(word);
    printf("%s\n", word);
}

//6.2.2
void wordSquare() {
    unsigned char word[100];
    printf("Enter word: \n");
    scanf("%s", word);
    //length of word
    int length = strlen(word);
    printf("Das Wordquadrat:\n");
    printf("%s\n", word);
    int spaceCount = length - 2;
    char space = ' ' * spaceCount;
    for (int i = 1; i < length - 1; i++) {
        printf("%c", word[i]);
        for (int j = 0; j < spaceCount; j++) {
            printf(" ");
        }
        printf("%c\n", word[length - i - 1]);

    }
    _strrev(word);

    printf("%s\n", word);
}

void anagram() {
    printf("Enter word to check if its annagram: \n");
    unsigned char anagram_word[100];
    char reversed_word[100];
    scanf("%s", anagram_word);
    // strcpy = copys a word from one string to an other
    strcpy(reversed_word, anagram_word);
    // _strrev reverses a string so from auto -> otua
    _strrev(reversed_word);
    // strcmp checks two strings are the same
    if (strcmp(reversed_word, anagram_word) == 0) {
        printf("Is an anagram\n");
    } else {
        printf("Is not an anagram\n");
    }
}

void balken() {
    char zeichen[1];
    printf("Bitte gebe Sie ein Zeichen ein, welches fur die Anzeige verwendet wird:\n");
    scanf("%s", zeichen);

    unsigned int diagramm[100];
    int anzahlWerte = 0;
    printf("Bitte geben Sie die Diagrammwerte ein (durch Leerschlag getrennt)\n");
    printf("Am Ende einen Buchstaben schreiben\n");

    while (scanf("%d", &diagramm[anzahlWerte]) == 1) {
        anzahlWerte++;
    }

    for (int i = 0; i < anzahlWerte; i++) {
        for (int j = 0; j < diagramm[i]; j++) {
            printf("%c", zeichen[0]);
        }
        printf("\n");
    }
}

void balken_stehend() {
    char zeichen[1];
    printf("Bitte gebe Sie ein Zeichen ein, welches fur die Anzeige verwendet wird:\n");
    scanf("%s", zeichen);

    unsigned int diagramm[100];
    int anzahlWerte = 0;
    printf("Bitte geben Sie die Diagrammwerte ein (durch Leerschlag getrennt)\n");
    printf("Am Ende einen Buchstaben schreiben\n");

    while (scanf("%d", diagramm[anzahlWerte]) == 1) {
        anzahlWerte++;
    }

    int size = anzahlWerte;

    int bigNum = BigNum(diagramm, size);

    for (int i = 0; i < anzahlWerte; i++) {
        for (int j = 0; j < diagramm[i]; j++) {

            printf("%c", zeichen[0]);
        }
        printf("\n");
    }
}

int BigNum(int *arr, int n) {
    int res = *arr;

    for (int i = 1; i < n; i++) {
        if (res < *(arr + i)) {
            res = *(arr + i);
        }
    }

    return res;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum Type {
    book,
    film,
    games,
    music,
    other
};

struct Medium {
    enum Type typ;
    char Title[50];
    char Autor[100];
    int RealseJahr;
};

int SizeOfMedien() {
    int SizeOfMed;

    printf("How many media entries do you want to create?\n");
    scanf("%d", &SizeOfMed);

    return SizeOfMed;
}

void printMedien(struct Medium *medien, int num_media) {
    printf("\nMedia Information:\n");
    for (int i = 0; i < num_media; i++) {
        printf("\nEntry %d:\n", i + 1);
        printf("Type: %d\n", medien[i].typ);
        printf("Title: %s", medien[i].Title);
        printf("Author: %s", medien[i].Autor);
        printf("Release Year: %d\n", medien[i].RealseJahr);
    }
}

struct Medium* createMedien(int SizeOfMedien) {
    struct Medium *medien = malloc(SizeOfMedien * sizeof(struct Medium));

    if (medien == NULL) {
        fprintf(stderr, "Memory allocation failed!\n");
        exit(1);
    }

    for (int i = 0; i < SizeOfMedien; i++) {
        fflush(stdin);
        printf("\nEntry %d:\n", i + 1);

        printf("What is the Type?\n1. book\n2. film\n3. games\n4. music\n5. other\n");
        scanf("%d", &medien[i].typ);

        printf("What is the title?\n");
        fgets(medien[i].Title, 50, stdin);


        printf("Who is the author?\n");
        fgets(medien[i].Autor, 100, stdin);


        printf("When did it come out (release year)?\n");
        scanf("%d", &medien[i].RealseJahr);
        getchar();
    }

    return medien;
}

void editMedien(struct Medium *medien, int SizeOfMedien) {
    int MedienToEdit;

    printf("Which media entry do you want to edit? (1-%d)\n", SizeOfMedien);
    scanf("%d", &MedienToEdit);
    fflush(stdin);
    MedienToEdit--;

    if (MedienToEdit >= 0 && MedienToEdit < SizeOfMedien) {
        printf("\nYou are editing:\nEntry %d:\n", MedienToEdit + 1);

        printf("What is the Type?\n");
        scanf("%d", &medien[MedienToEdit].typ);

        printf("What is the title?\n");
        fgets(medien[MedienToEdit].Title, 50, stdin);

        printf("Who is the author?\n");
        fgets(medien[MedienToEdit].Autor, 100, stdin);

        printf("When did it come out (release year)?\n");
        scanf("%d", &medien[MedienToEdit].RealseJahr);
    } else {
        printf("Invalid entry number.\n");
    }
}

int main() {
    int LenOfMedien = SizeOfMedien();
    struct Medium *medien = createMedien(LenOfMedien);

    printMedien(medien, LenOfMedien);

    free(medien);

    return 0;
}
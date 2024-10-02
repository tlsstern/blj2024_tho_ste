//
#include <stdio.h>

double notenberechner();

int main() {
    int anzahlPruefungen;
    float erreichtePun;
    int maxPun;
    float summeNoten = 0.0;

    start:
    printf("Geben Sie die Anzahl der Pruefungen ein:\n");
    if (scanf("%d", &anzahlPruefungen) != 1 || anzahlPruefungen > 25) {
        printf("Invalid input\n");
        fflush(stdin);
        goto start;
    }
    maxpun:
    for (int i = 1; i <= anzahlPruefungen; i++) {
        printf("Pruefung %d\n", i);
        ask:
        printf("Maximale Punkte:\n");;
        if (scanf("%d", &maxPun) != 1) {
            printf("Invalid input\n");
            fflush(stdin);
            goto maxpun;
        }
    pun:
        printf("Erreichte Punkte:\n");
        if (scanf("%f", &erreichtePun) != 1 || erreichtePun < 0 || erreichtePun > maxPun) {
            printf("Invalid input\n");
            fflush(stdin);
            goto pun;
        };

        double note = notenberechner(erreichtePun, maxPun);

        printf("Note: %.2f\n", note);

        summeNoten += note;
    }

    double durchschnitt = summeNoten / anzahlPruefungen;


    printf("\nDurchschnitt aller Noten: %.2f\n", durchschnitt);

    return 0;
}

double notenberechner(double pun, int max) {
    double note = pun / max;
    note = note * 5;
    note++;
    return note;
}

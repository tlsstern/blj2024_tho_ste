#include <stdio.h>

void kreis_umfang();
void deci_octa_hex();
void hex_octa_zu_dec();
void char_128();
void durch_mitnachkomma();
void debugging();


int main(void) {
    deci_octa_hex();
    kreis_umfang();
    hex_octa_zu_dec();
    char_128();
    durch_mitnachkomma();
    debugging();
}

void deci_octa_hex() {
    int zahl = 1000;
    printf("1000 Als \nDezimal \tOktal \t\tHex \n");
    printf("%d\t\t%o\t\t%x\n", zahl, zahl, zahl);
}


void kreis_umfang() {
    float radius;
    printf("\nBitte geben Sie den Radius an: \n");
    scanf("%f", &radius);
    float pi = 3.141592653589793;
    float durchschnitt = 2 * radius;
    float umfang = durchschnitt * pi;
    printf("Der Umfang der Kreises betraegt = %.2lf \n", umfang);
}

void hex_octa_zu_dec() {
    int hex, octa;
    printf("\nBitte geben Sie Ihre Hexadezimale Zahl ein: \n");
    scanf("%x", &hex);
    printf("Ihre Zahl ist %d in Dezimal.\n", hex);

    printf("Bitte geben Sie Ihre Oktale Zahl ein: \n");
    scanf("%o", &octa);
    printf("Ihre Zahl ist %d in Dezimal.\n", octa);
}

void char_128() {
    signed char high = 128;
    signed char low = -128;
    printf("High %d, Low %d\n", high, low);
    // Nein nur -128 kann als signed Char dargstellt werden.
}

void durch_mitnachkomma() {
    double a;
    a = 2 /3;
    printf("Ohne bearbeitung 2 / 3 = %.2f \n", a);
    double b;
    b = 2.0 /3.0;
    printf("Ohne bearbeitung 2 / 3 = %.2f \n", b);
    printf("Man kann nicht a = 2/3 machen weil der Code denkt 2 und 3 waeren int.  \nMan muss a = 2.0 / 3.0 machen dann denkt der Code es sind doubles \nund nicht ints.");
}

void debugging() {
    double a = 0.0;
    int i = 0;
    for (i = 0; i < 10; i++) {
        a = a + 1;
    }
    a = a / 10;
    if (a == 1.0) {
        printf("Das Resultat ist 1.0\n");
    }
}
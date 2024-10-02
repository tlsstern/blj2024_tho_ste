#include <stdio.h>
#include <string.h>

void kreis_umfang();
void deci_octa_hex();
void hex_octa_zu_dec();
void char_128();


int main(void) {
    deci_octa_hex();
    kreis_umfang();
    hex_octa_zu_dec();
    char_128();

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

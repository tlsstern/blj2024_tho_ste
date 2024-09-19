#include <stdio.h>
#include <math.h>

float flaeche_kreis(float radius);
float kleiner_zahl(float zahl1, float zahl2);

float auf(void){
    flaeche_kreis(10);
    kleiner_zahl(32.69, 35);
    return 0;
}

float flaeche_kreis(float radius){
    float radius_hoch_zwei = radius * radius;
    float pi = 3.14159265359;
    float flaeche = pi * radius_hoch_zwei;
    printf("flaeche: %.3lf\n", flaeche);
    return flaeche;
}

float kleiner_zahl(float zahl1, float zahl2) {
    if (zahl1 > zahl2) {
        if (fmod(zahl2, 1.0) == 0)
            printf("Die kleiner Zahl ist %.0lf\n", zahl2);
        else {
            printf("Die kleiner Zahl ist %.3lf", zahl2);
        }
    } else if (zahl1 < zahl2) {
        if (fmod(zahl1, 1.0) == 0)
            printf("Die kleiner Zahl ist %.0f\n", zahl1);
        else {
            printf("Die kleiner Zahl ist %.3lf", zahl1);
        }
    } else if (zahl1 == zahl2) {
        if (fmod(zahl2, 1.0) == 0)
            printf("Die Zahlen sind gleich gross%.0lf\n", zahl2);
        else {
            printf("Die Zahlen sind gleich gross%.3lf", zahl2);
        }
    } else {
        printf("Das ist keine Zahl\n");
    }
    return 0;
}
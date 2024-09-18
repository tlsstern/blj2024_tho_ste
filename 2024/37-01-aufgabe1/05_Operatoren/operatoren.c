#include <stdio.h>

int main(void) {

    float x = 23;
    float y = 7;
    double p = 33.333;
    double q = 3.001;
    int a = 1;
    int b = 2;
    int c = 3;

    printf("----------------------------------------------------------------------------------------------\n");
    printf("Variabele\t\t Zeichen\t\t dez\t\t hex\t\t okt\n");
    printf("----------------------------------------------------------------------------------------------\n");
    printf("c [char]\t\t\t %f\t\t %a\t\t %lo\t\n", x, x, x);
    printf("c [char]\t\t\t %f\t\t %a\t\t %lo\t\n", y, y, y);
    printf("s [short]\t\t\t %lf\t\t %a\t\t %lo\t\n", p, p, p);
    printf("i [int]\t\t\t\t %lf\t\t %a\t\t %lo\t\n", q, q, q);
    printf("l [long]\t\t\t %d\t\t %x\t\t %o\t\n", a, a, a);
    printf("f [float]\t\t\t %d\t\t %x\t\t %o\t\t\n", b, b, b);
    printf("d [double]\t\t\t %d\t\t %x\t\t %o\t\n", c, c, c);

    int rechnung1 = 3+4*2-10;
    printf("\n3 + 4 * 2 -10 = %d", rechnung1);
    // Man kann die Reihenfolge der Rechnung mit ( ) verandern.
    // Die Rechnung seht sich die ganze rechnung an und rechnet wie der Taschenrechner punkt bevor strich
    double rechnung2 = x/y;
    printf("\nx / y = %f", rechnung2);
    // Es rechnet 23/7 aber streicht den Rest alles nach dem .
    // Man kann den Rest anzeigen indem man, x und y zu doubles macht.

    return 0;

}
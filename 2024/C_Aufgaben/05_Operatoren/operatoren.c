#include <stdio.h>

void vorbereitung();

void logische_operatoren();

void inkrement_dekrenebt();

void BinToHex();

void decToBin();

int main(void) {
    // vorbereitung();
    // logische_operatoren();
    // inkrement_dekrenebt();
    BinToHex();
    // decToBin();
}

void vorbereitung() {
    double x = 23.0;
    double y = 7.0;
    double p = 33.333;
    double q = 3.001;
    int a = 1;
    int b = 2;
    int c = 3;


    printf("3 + 4 * 2 - 10 = 1\n");
    // Muss () hinzufügen
    printf("3 + 4 * 2 - 10 = %d\n", 3 + (4 * 2) - 10);
    // Muss x und y zu doubles machen
    printf("x / y = %.2lf\n", x / y);
    // %.6lf heisst das es 6 nach komma stellen givt. Man muss %.6lf schreiben damit der Divisionsrest angezeigt wird
    printf("p / q = %.6lf\n", p / q);
}

void logische_operatoren() {
    int a = 1;
    int b = 2;
    int c = 3;

    // 0 = Falsch 1 = True
    printf("Ausdruck a==b: %d\n", (a == b)); // 0
    printf("Ausdruck a!=b: %d\n", (a != b)); // 1
    printf("Ausdruck b<10: %d\n", (b < 10)); // 1
    printf("Ausdruck c>=3: %d\n", (c >= 3)); // 1
    printf("Ausdruck (1>=1 && 2==2): %d\n", (1 >= 1 && 2 == 2)); // 1
    printf("Ausdruck (1==0 || 3==3): %d\n", (1 == 0 || 3 == 3)); // 1
    printf("Ausdruck !(1==0): %d\n", !(1 == 0)); // 1
}

void inkrement_dekrenebt() {
    int a = 1;
    int b = 2;

    printf("%d\n", ++a); // a wird direct 2
    printf("%d\n", a--); // a bleibt 2 wird aber nächstes mall 1
    printf("%d\n", a++); // a bleibt 1 wird aber nächstes mall 2
    printf("%d\n", --a); // a wird von 2 -> 1 direct


    b = ++a + a++; // a Wird direct zu 2 also 2 + a++ und a++ macht das es dann zu 3 geht also 2 + 3
    printf("b = %d\n", b);
}

void BinToHex() {
}

void decToBin() {
    int num;
    printf("Enter a decimal number:\n");
    scanf("%d", &num);
    int print_num = num;

    int binary[32];
    int i = 0;

    if (num == 0) {
        printf("Binary = 0 \n Dec = 0\n");
    } else {
        while (num > 0) {
            binary[i] = num % 2;
            num = num / 2;
            i++;
        }

        printf("Binary of %d is: ", print_num);
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binary[j]);
        }
        printf("\n");
    }
}

#include <stdio.h>

void basis_html();
void table_html();

int main()
{
    table_html();
    // basis_html();
}

void table_html() {
    FILE *file = fopen("../index.html", "w");
    char family[50];
    int size;
    char color[50];
    char bgcolor[50];
    char bordercolor[50];
    int borderwidth;
    char borderstyle[50];

    printf("How many Colums do you want?\n");
    int colums;
    scanf("%d", &colums);
    printf("How many Rows do you want?\n");
    int row;
    scanf("%d", &row);

    fprintf(file,"<!DOCTYPE html>\n<html>\n<head>\n\t<title>Table</title>\n");
    fprintf(file, "\t<style>\n");
    fprintf(file, "\t\ttable, tr, th{\n\t\t\tborder-collapse: collapse;\n\t\t\tmargin: 7px 15px 7px 15px;\n\t\t}\n");

    printf("What font would you like? \n(Arial, Verdana, Times New Roman, Georgia, Courier)\n");
    scanf("%s", family);
    fprintf(file, "\t\t*{\n\t\t\tfont-family: %s;\n\t\t}\n", family);

    printf("What font size would you like? (in px)\n");
    scanf("%d", &size);
    fprintf(file, "\t\ttr, td{\n\t\t\tfont-size: %dpx;\n\t\t}\n", size);

    printf("What font color would you like? (black, red or #hexcode)\n");
    scanf("%s", color);
    fprintf(file, "\t\t*{\n\t\t\tcolor: %s;\n\t\t}\n", color);

    printf("What background color would you like? (white, blue, #hexcode)\n");
    scanf("%s", bgcolor);
    fprintf(file, "\t\t*{\n\t\t\tbackground-color: %s;\n\t\t}\n", bgcolor);

    printf("What border color would you like? (black, green, #hexcode)\n");
    scanf("%s", bordercolor);
    fprintf(file, "\t\ttr, th{\n\t\t\tborder-color: %s;\n\t\t}\n", bordercolor);

    printf("What border width would you like? (in px)\n");
    scanf("%d", &borderwidth);
    fprintf(file, "\t\ttr, th{\n\t\t\tborder-width: %dpx;\n\t\t}\n", borderwidth);

    printf("What border style would you like? \n(solid, dotted, dashed, double, groove, ridge, inset, outset, none, hidden)\n");
    scanf("%s", borderstyle);
    fprintf(file, "\t\ttr, th{\n\t\t\tborder-style: %s;\n\t\t}\n", borderstyle);

    fprintf(file, "\t</style>\n");
    fprintf(file,"</head>\n");
    fprintf(file,"<body>\n");
    fprintf(file,"\t<!-- Content here -->\n");
    fprintf(file,"\t<h1>Hello World - Tabelle</h1>\n");
    fprintf(file,"\t<table>\n");

    for(int i = 1; i <= row; i++) {
        fprintf(file,"\t\t<tr>\n");
        if (i == 1) {
            for(int j = 1; j <= colums; j++) {
                fprintf(file,"\t\t\t<td>\n");
                fprintf(file,"\t\t\t\t<h1>Header %d</h1>\n", j);
                fprintf(file,"\t\t\t</td>\n");
            }
        }else {
            for(int j = 1; j <= colums; j++) {
                fprintf(file,"\t\t\t<td>\n");
                fprintf(file,"\t\t\t\tHello World\n");
                fprintf(file,"\t\t\t</td>\n");
            }
        }

        fprintf(file,"\t\t</tr>\n");
    }
    fprintf(file,"\t</table>\n");
    fprintf(file,"</body>\n</html>\n");


    fclose(file);
}

void basis_html() {
    printf("How many Colums do you want?\n");
    int colums;
    scanf("%d", &colums);
    printf("How many Rows do you want?\n");
    int row;
    scanf("%d", &row);

    printf("\n\n\n\n\n\n");
    printf("<!DOCTYPE html>\n<html>\n<head>\n\t<title>Table</title>\n</head>\n");
    printf("<body>\n");
    printf("\t<!-- Content here -->\n");
    printf("Hello World - Tabelle");
    printf("\t<table>\n");

    for(int i = 1; i <= row; i++) {
        printf("\t\t<tr>\n");
        if (i == 1) {
            for(int j = 1; j <= colums; j++) {
                printf("\t\t\t<td>\n");
                printf("\t\t\t\t<h1>Header %d<h1>\n", j);
                printf("\t\t\t</td>\n");
            }
        }else {
            for(int j = 1; j <= colums; j++) {
                printf("\t\t\t<td>\n");
                printf("\t\t\t\tHello World\n");
                printf("\t\t\t</td>\n");
            }
        }

        printf("\t\t</tr>\n");
    }
    printf("\t</table>\n");
    printf("</body>\n</html>\n");
}
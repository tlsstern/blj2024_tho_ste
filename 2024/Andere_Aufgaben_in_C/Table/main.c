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

    printf("How many Colums do you want?\n");
    int colums;
    scanf("%d", &colums);
    printf("How many Rows do you want?\n");
    int row;
    scanf("%d", &row);

    fprintf(file,"\n\n\n\n\n\n");
    fprintf(file,"<!DOCTYPE html>\n<html>\n<head>\n\t<title>Table</title>\n</head>\n");
    fprintf(file,"<body>\n");
    fprintf(file,"\t<!-- Content here -->\n");
    fprintf(file,"\t<table>\n");

    for(int i = 1; i <= row; i++) {
        fprintf(file,"\t\t<tr>\n");
        if (i == 1) {
            for(int j = 1; j <= colums; j++) {
                fprintf(file,"\t\t\t<td>\n");
                fprintf(file,"\t\t\t\t<h1>Header %d<h1>\n", j);
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


        fclose(file);
    }
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
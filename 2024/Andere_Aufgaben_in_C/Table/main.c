#include <stdio.h>

int main()
{
    FILE *file = fopen("table.html", "w");

    fprintf(file, "<!DOCTYPE html><html><head><title>Table</title></head>");
    fprintf(file, "<body>");
    fprintf(file, "<!-- Content here -->");
    fprintf(file, "</body></html>");


    fclose(file);
}

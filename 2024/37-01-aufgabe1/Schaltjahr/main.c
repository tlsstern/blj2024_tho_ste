#include <stdio.h>

int isLeapYear(int year);
int daysInMonth(int month, int year);
void printDateInfo(int month, int year, int day);

int main() {
    int month;
    int year;
    printf("Please enter a year: \n");
    scanf("%d", &year);
    printf("Please enter a month: \n");
    scanf("%d", &month);

    isLeapYear(year);
    int day = daysInMonth(month, year);
    printDateInfo(month, year, day);
    return 0;
}

int isLeapYear(int year){
    if (year % 4 == 0) {
        printf("Das Jahr %d ist ein Schaltjahr\n", year);
    }
    else {
        printf("Das Jahr %d ist kein Schaltjahr\n", year);
    }
}

int daysInMonth(int month, int year){
    int days;
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        days = 31;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    }
    else if (year % 4 == 0) {
        days = 29;
    }
    else{
        days = 28;
    }
    printf("Dieser Monat hat %d tage \n", days);
    return days;
}

void printDateInfo(int month, int year, int day) {
    printf("Der Monat %d hat im Jahr %d %d Tage. \n", month, year, day);
}
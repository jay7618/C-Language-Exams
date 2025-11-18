#include <stdio.h>

void leap();

int main () {
    
    int year;
    printf("Enetr Any Year : ");
    scanf("%d",&year);
    
    leap(year);

    return 0;
}

void leap(int year) {
    if((year % 4 == 0 && year % 100 != 0) || (year % 4 == 0) && (year % 400 == 0)) {
        printf("Given Year is leap Year");
    } else {
        printf("Given Year is Not leap Year");
    }
}
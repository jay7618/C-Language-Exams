#include <stdio.h>

int main () {

    int start,end,i,n;
    
    printf("Enetr Eny no : ");
    scanf("%d", &n);

        end = n % 10;

    printf("last no : %d \n", end);
    
    while ( n != 0) {
        start = n % 10;
        n = n / 10;
    }
    printf("first no : %d \n", start);

    printf("The Sum Of The first and last digit : %d \n", start + end);

    return 0;
}
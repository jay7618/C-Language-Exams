#include <stdio.h>

int main () {

    int n,i,digit,tnd;
    
    printf("Enetr Any no : ");
    scanf("%d", &n);

    while (n != 0) {
        digit = digit + n % 10;
        n = n / 10;
        tnd++;
    }

    printf("%d", tnd);

    return 0;
}
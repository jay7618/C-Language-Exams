#include <stdio.h>
#include <string.h>

int main () {

    char str[100];

    printf("Enetr Any String : ");
    gets(str);


    printf("Reversed String : %s",strrev(str));

    return 0;
}
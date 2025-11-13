#include <stdio.h>
#include <string.h>

void lenght(char str[],int *len);

int main () {

    char str[100];
    int len = 0;

    printf("Enetr any string : ");
    gets(str);

    lenght(str,&len);

    printf("String Lenght is : %d",len);

    return 0;
}

void lenght(char str[],int *len) {
    // for (int i = 0; i =! '\0';i++)
    *len = strlen(str);
}
#include <stdio.h>

int main () {

    char str[100];
    char test;
    int upper = 0,lower = 0;


    printf("Enetr any string : ");
    gets(str);

    for(int i = 0;str[i] != '\0';i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            upper++;
        }if (str[i] >= 'a' && str[i] <= 'z') {
            lower++;
        }
    }

    printf("Number of Uppercase in string : %d\n",upper);
    printf("Number of Lowercase in string : %d",lower);

    return 0;
}
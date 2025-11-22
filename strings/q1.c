#include <stdio.h>

int main () {

    char str[100];
    int count = 0;

    printf("Enetr Any String : ");
    gets(str);

    for(int i = 0; str[i] != '\0';i++) {
        count++;
    }

    printf("Number of word in string are %d",count);

    return 0;
}
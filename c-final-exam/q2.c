#include <stdio.h>
#include <string.h>

void count(str,vowel);

int main () {

    char str[100];
    int vowel = 0;
    printf("Enetr Any Sentance : ");
    gets(str);

    count(str,vowel);
    
    return 0;
}

void count(char str[],int vowel) {
    for(int i = 0; str[i] != '\0';i++) {
        printf("%c",str[i]);
        if((str[i] == 'a' || str[i] == 'A') || (str[i] == 'e' || str[i] == 'E') || (str[i] == 'i' || str[i] == 'I') || (str[i] == 'o' || str[i] == 'O') || (str[i] == 'u' || str[i] == 'U')) {
            vowel++;
        }
    }
    printf("Total Vowels in String are : %d\n",vowel);
}
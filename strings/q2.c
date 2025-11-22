#include <stdio.h>

int main () {

    char str[100];
    int vowel = 0,consonant = 0;

    printf("Enetr any string : ");
    gets(str);

    for(int i = 0;str[i] != '\0';i++) {
        if((str[i] == 'a' || str[i] == 'A') || (str[i] == 'e' || str[i] == 'E') || (str[i] == 'i' || str[i] == 'I') || (str[i] == 'o' || str[i] == 'O') || (str[i] == 'u' || str[i] == 'U')) {
            vowel++;
        } else {
            consonant++;
        }
    }

    printf("Number of vowel in string : %d\n",vowel);
    printf("Number of consonant in string : %d",consonant);

    return 0;
}
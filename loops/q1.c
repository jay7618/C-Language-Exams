#include <stdio.h>

int main () {

    char alp = 97;
    int i;

    do {
        printf("%c ", alp);
        alp = alp + 4;
    } while (alp <= 122);

    return 0;
}
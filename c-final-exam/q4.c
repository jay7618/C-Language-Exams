#include <stdio.h>

void swap();

int main () {

    int a,b;

    printf("Enetr value of a : ");
    scanf("%d",&a);

    printf("Enetr value of b : ");
    scanf("%d",&b);

    swap(&a,&b);
    // a = a + b;
    // b = a - b;
    // a = a - b;
    
    printf("swaped value of a = %d and b = %d",a,b);
    
    return 0;
}

void swap(int *a,int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;

}
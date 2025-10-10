#include <stdio.h>

int main () {

    int size;

    printf("Enetr Array Size : ");
    scanf("%d",&size);

    int arr[size];

    for (int i = 0; i < size; i++) {
        printf("Enetr Array Value : ");
        scanf("%d",&arr[i]);
    }

    printf("Negetive elements From an Array : ");
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            printf("%d ",arr[i]);
        }
    }
    printf("\nNo negetive elements Found !!");

    return 0;
}
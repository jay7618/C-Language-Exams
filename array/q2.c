#include <stdio.h>

int main () {

    int row,col;

    printf("Enetr Array row : ");
    scanf("%d",&row);
    printf("Enetr Array col : ");
    scanf("%d",&col);

    int arr[row][col];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Enter Value : ");
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf(" %d",arr[i][j]);
        }
        printf("\n");
    }

    int big = arr[0][0];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (big < arr[i][j]) {
                big = arr[i][j];
            }
        }
    }

    printf("the Larget No is : %d",big);

    return 0;
}
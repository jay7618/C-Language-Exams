#include <stdio.h>

int main () {

    int row_col;

    printf("Enetr Array row & col : ");
    scanf("%d",&row_col);

    int row = row_col;
    int col = row_col;

    int arr[row_col][row_col];
    int big = 0;

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

    return 0;
}
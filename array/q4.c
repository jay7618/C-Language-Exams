#include <stdio.h>

int main () {

    int row,col,sum = 0;

    printf("Enetr Array row : ");
    scanf("%d",&row);
    printf("Enetr Array col : ");
    scanf("%d",&col);

    int arr[row][col];
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

    int rowNo,colNo;
    printf("Enter Row Number : ");
    scanf("%d",&rowNo);

    printf("Elements of Row %d : ",rowNo);
    for (int j = 0; j < row;j++) {
        printf(" %d",arr[rowNo][j]);
        sum = sum + arr[rowNo][j];
    }
    printf("\nthe Sum of Row : %d",sum);

    //-----------------------------//

    sum = 0;

    printf("\nEnter Col Number : ");
    scanf("%d",&colNo);

    printf("\nElements of Col %d : ",colNo);
    for (int i = 0; i < col;i++) {
        printf(" %d",arr[i][colNo]);
        sum = sum + arr[i][colNo];
    }
    printf("\nthe Sum of Row : %d",sum);

    return 0;
}
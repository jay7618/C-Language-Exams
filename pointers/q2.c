#include <stdio.h>

void cube();

int main () {

    int row,col,metrix;

    printf("Eneter array's size : ");
    scanf("%d",&metrix);

    row = metrix;
    col = metrix;

    int arr[row][col];
    int ans[row][col];

    for (int i = 0;i < row;i++) {
        for (int j = 0; j < col;j++) {
            printf("Eneter Value : ");
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0;i < row;i++) {
        for (int j = 0; j < col;j++) {
            printf("%d ",arr[i][j]);
            // scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

    void cube(row,col,arr,ans);

    return 0;
}

void cube (int row,int col,int *arr[],int *ans[]) {

    for (int i = 0;i < row;i++) {
        for (int j = 0; j < col;j++) {
            *ans[i][j] =  * *arr[i][j] * *arr[i][j] * *arr[i][j];
        }
    }

}
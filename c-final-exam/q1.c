#include <stdio.h>

int main () {

    int no,fact = 1;
    printf("Enetr Any Integer no : ");
    scanf("%d",&no);
    
    for(int i = 1;i <= no;i++) {
        fact = fact * i;
    }
    
    printf("factorial of %d is ---> %d",no,fact);

    return 0;
}
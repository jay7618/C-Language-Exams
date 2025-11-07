#include <stdio.h>

// int UDF();   // ----------- **************** FOR TSRS [TAKE SOMETHING RETURN SOMETHING] **************** -----------

void UDF();     // ----------- **************** FOR TSRN [TAKE SOMETHING RETURN NOTHING] ****************  -----------

int main () {

    int num1,num2,add,sub,mul,div,mod,no,second,ans = 0;

    printf("Press 1 for +\n");

    printf("Press 2 for -\n");

    printf("Press 3 for *\n");

    printf("Press 4 for /\n");

    printf("Press 5 for %\n");

    printf("Press 6 for Exit\n");

    printf("Enetr Your No : ");
    scanf("%d",&no);



    UDF(no,num1,num2,ans); 
                // ----------- **************** FOR TSRS [TAKE SOMETHING RETURN SOMETHING] **************** -----------
    // if (no == 1) {
    //     printf("Addition of %d and %d is : %d\n",num1,num2,ans);
    // } else if (no == 2) {
    //     printf("Substraction of %d and %d is : %d\n",num1,num2,ans);
    // } else if (no == 3) {
    //     printf("Multiplication of %d and %d is : %d\n",num1,num2,ans);
    // } else if (no == 4) {
    //     printf("divide of %d and %d is : %d\n",num1,num2,ans);
    // } else if (no == 5) {
    //     printf("modulo of %d and %d is : %d\n",num1,num2,ans);
    // } else {
    //     return 0;
    // }

    return 0;
}

        // ----------- **************** FOR TSRS  [TAKE SOMETHING RETURN SOMETHING] **************** -----------

// int UDF (int no, int num1, int num2, int ans) {

//     switch (no) {
//         case 1 :
//             printf("\nEnetr 1st No : ");
//             scanf("%d",&num1);

//             printf("\nEnetr 2nd No : ");
//             scanf("%d",&num2);

//             ans = num1 + num2;

//             // printf("Addition of %d and %d is : %d\n",num1,num2,ans);
//             return ans;

//             break;
//         case 2 :
//             printf("\nEnetr 1st No : ");
//             scanf("%d",&num1);

//             printf("\nEnetr 2nd No : ");
//             scanf("%d",&num2);

//             ans = num1 - num2;

//             // printf("Substraction of %d and %d is : %d\n",num1,num2,ans);
//             return ans;

//             break;
//         case 3 :
//             printf("\nEnetr 1st No : ");
//             scanf("%d",&num1);

//             printf("\nEnetr 2nd No : ");
//             scanf("%d",&num2);

//             ans = num1 * num2;

//             // printf("Multiplication of %d and %d is : %d\n",num1,num2,ans);
//             return ans;

//             break;
//         case 4 :
//             printf("\nEnetr 1st No : ");
//             scanf("%d",&num1);

//             printf("\nEnetr 2nd No : ");
//             scanf("%d",&num2);

//             ans = num1 / num2;

//             // printf("divide of %d and %d is : %d\n",num1,num2,ans);
//             return ans;

//             break;
//         case 5 :
//             printf("\nEnetr 1st No : ");
//             scanf("%d",&num1);

//             printf("\nEnetr 2nd No : ");
//             scanf("%d",&num2);

//             ans = num1 + num2;

//             // printf("modulo of %d and %d is : %d\n",num1,num2,ans);
//             return ans;

//             break;
//         case 6 :
//             // return 0;

//             break;
        
//         default:
//         printf("invalid..!!");
//             break;
//     }

// }




//-----------------------------------------------------------------------------------------------------------------------------//




        // ----------- **************** FOR TSRN [TAKE SOMETHING RETURN NOTHING] **************** -----------


void UDF (int no, int num1, int num2, int ans) {

    switch (no) {
        case 1 :
            printf("\nEnetr 1st No : ");
            scanf("%d",&num1);

            printf("\nEnetr 2nd No : ");
            scanf("%d",&num2);

            ans = num1 + num2;

            printf("Addition of %d and %d is : %d\n",num1,num2,ans);
            return ans;

            break;
        case 2 :
            printf("\nEnetr 1st No : ");
            scanf("%d",&num1);

            printf("\nEnetr 2nd No : ");
            scanf("%d",&num2);

            ans = num1 - num2;

            printf("Substraction of %d and %d is : %d\n",num1,num2,ans);
            return ans;

            break;
        case 3 :
            printf("\nEnetr 1st No : ");
            scanf("%d",&num1);

            printf("\nEnetr 2nd No : ");
            scanf("%d",&num2);

            ans = num1 * num2;

            printf("Multiplication of %d and %d is : %d\n",num1,num2,ans);
            return ans;

            break;
        case 4 :
            printf("\nEnetr 1st No : ");
            scanf("%d",&num1);

            printf("\nEnetr 2nd No : ");
            scanf("%d",&num2);

            ans = num1 / num2;

            printf("divide of %d and %d is : %d\n",num1,num2,ans);
            return ans;

            break;
        case 5 :
            printf("\nEnetr 1st No : ");
            scanf("%d",&num1);

            printf("\nEnetr 2nd No : ");
            scanf("%d",&num2);

            ans = num1 + num2;

            printf("modulo of %d and %d is : %d\n",num1,num2,ans);
            return ans;

            break;
        case 6 :
            return 0;

            break;
        
        default:
        printf("invalid..!!");
            break;
    }

}
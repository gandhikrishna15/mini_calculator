#include<stdio.h>
int main()
{
 float a,b,result;
 int n;                //here n repersent the option
 // Display menu
        printf("\nMini Calculator");
        printf("\n-----------------\n");
        printf("enter the first number a: \n");
        scanf("%f",&a);
        printf("enter the second number b: \n");
        scanf("%f",&b);
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Exit");
        
        printf("\nEnter your choice: ");
        scanf("%d",&n);
        // Perform operation
        switch(n) {
            case 1:
                //addition
                result=a+b;
                printf("Result: %.2f\n", result);
                break;
            case 2:
            //subraction
            result=a-b;
            printf("Result: %.2f\n", result);
                break;
            case 3:
                // multiplaycation
                result=a*b;
                printf("Result: %.2f\n", result);
                break;
            case 4:
                if (b== 0) {
                    printf("Error! Division by zero is not allowed.\n");
                } else {
                    //division
                    
                    result=a/b;
            printf("Result: %.2f\n", result);
                break;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }






    return 0;
}}
#include <stdio.h>
int main(){
int a,b;
int type;
float result;

// Prompt the user for the type of operation
printf("Hello, what operation would you like to carry out\n");
printf("Select 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division: ");
scanf("%i", &type);

// Prompt the user for the numbers to operate on
printf("Enter your first number: ");
scanf("%i",&a);
printf("Enter your second number: ");
scanf("%i",&b);

// Perform the operation based on the user's choice
switch (type)
{
case 1:
   result = (a + b);
   printf("Your result is: %.2f\n",result);
    break;
case 2:
   result = (a-b);
   printf("Your result is: %.2f\n",result);
    break;
case 3:
   result = (a*b);
   printf("Your result is: %.2f\n",result);
    break;
case 4:
    if (b!=0){
   result =(float)a/b;
   printf("Your result is: %.2f\n",result);
    }else{
        printf("Invalid operation, division by zero not allowed\n");
    }
    break;

default:
    printf("Unknown operation, try selecting 1, 2, 3 or 4\n");
    break;
}


    return 0;
}
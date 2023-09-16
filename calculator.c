# include <stdio.h>


int main(){

char operator;
double num1;
double num2;
double result;

printf("\nChoice an operator (+,-,*,/):");
scanf("%c",&operator);

printf("\nEnter the first number: ");
scanf("%lf",&num1);

printf("\nEnter the second number: ");
scanf("%lf",&num2);

switch(operator){

    case '+':
        result = num1 +num2;
        printf("\nThe result: %.2lf",result);
        break;

    case '-':
        result = num1 - num2;
        printf("\nThe result: %.2lf",result);
        break;

    case '*':
        result = num1 * num2;
        printf("\nThe result: %.2lf",result);
        break;

    case '/':
        result = num1 / num2;
        printf("\nThe result: %.2lf",result);
        break;

    default:
        printf("%c is not a valid operater", operator);
}
    return 0;
}
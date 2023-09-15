# include <stdio.h>


int main(){

char operator;
double numb1;
double numb2;
double result;

printf("\nEnter the operation (+, -, *, /): ");
scanf("%c", &operator);

printf("\nEnter the first number: ");
scanf("%lf",&numb1);

printf("\nEnter the second number: ");
scanf("%lf",&numb2);

switch (operator){
    
    case '+':
        result = numb1 + numb2;
        printf("\nThe result: %.2lf",result);
        break;

    case '-':
        result = numb1 - numb2;
        printf("\nThe result: %.2lf",result);
        break;

    case '*': 
        result = numb1 * numb2;
        printf("\nThe result: %.2lf",result);
        break;

    case '/':
        result = numb1 / numb2;
    
    default: 
        printf("\n%c is not a valid operator", operator);
}


    return 0;
}
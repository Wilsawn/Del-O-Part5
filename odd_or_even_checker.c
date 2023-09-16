# include <stdio.h>

int main(){
    
    int number;

    printf("\n>> Welcome to the odd or even integer checker");
    printf("\n>> Enter the integer: ");
    scanf("%d",&number);

    if( number % 2 == 0)
        printf("\n>> %d is a even integer", number);
    else
        printf("\n>> %d is a odd integer", number);
        
return 0;
}
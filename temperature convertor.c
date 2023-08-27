# include <stdio.h>
# include <ctype.h>

int main(){

    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C): ");
    scanf("%c", &unit);

    if (unit == 'C'){
        printf("The temperature presently in C");
    }

    else if (unit == 'F'){
        printf("The temperature presently in F");
    }

    else {
        printf("\nThis is not a unit");
    }


    return 0;
}
# include <stdio.h>
# include <ctype.h>

int main(){

    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C): ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if (unit == 'C'){
        printf("\nEnter the temperature in Celsius: ");
        scanf("%f",&temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temperature in Fahrenheit is: %.1f", temp);
    }

    else if (unit == 'F'){
        printf("\nEnter the temperature in Fahrenheit: ");
        scanf("%f",&temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temperature in Celsius is: %.1f", temp); 
    }

    else {
        printf("\nThis is not a unit");
    }

  return 0;
    
}
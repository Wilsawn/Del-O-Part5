# include <stdio.h>
# include <math.h>

int main(){

    double a;
    double b;
    double c;
    double root1;
    double root2;
    double discriminant;
    double real;
    double imag1;
    double imag2;

    printf("\n>> Enter the value of a: ");
    scanf("%lf",&a);

    printf("\n>> Enter the value of b: ");
    scanf("%lf",&b);

    printf("\n>> Enter the value of c: ");
    scanf("%lf",&c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0){
        root1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        root2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
        printf("\n>> Root1 = %.2lf",root1);
        printf("\n>> Root2 = %.2lf",root2);
    }
    else if (discriminant == 0){
        root1 = root2 = (-b) / (2 * a);
        printf("\n>> Root1 = Root1 = %.2lf", root1);
    }
    else {
        real = -b;
        imag1 = (sqrt(-discriminant)) / (2 * a);
        imag2 = (sqrt(-discriminant)) / (2 * a);
        printf("\n>> Root1 = %.2lf + %.2lfi",real, imag1);
        printf("\n>> Root2 = %.2lf - %.2lfi",real, imag2 );
    }
    return 0;
}
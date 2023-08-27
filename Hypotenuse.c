# include <stdio.h>
# include <string.h>
# include <math.h>




int main(){


// Hypotenuse Calculator
  double A;
  double B;
  double C;


  printf(">> Hypotenuse Calculator");


  printf("\nSide a:", A);
  scanf("%lf", &A);


  printf("\nSide b:", B);
  scanf("%lf", &B);


  C = sqrt(pow(A, 2) + pow(B, 2));
  printf("\nThe hypotenuse is: %lf",C);
   
    return 0;


}

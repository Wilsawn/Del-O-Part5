int main(){


// calculate the circumference & area of a circle
  const double PI = 3.14159;
  double radius;
  double circumference;
  double area;
 
    printf("\n>> Enter the radius of the circle:");
   
    scanf("%lf",&radius);


    circumference = 2*radius*PI;
    area = PI*radius*radius;
   
    printf("\nThe circumference of the circle is %lf", circumference);
    printf("\nThe area of the circle is %lf", area);
 
    return 0;

}
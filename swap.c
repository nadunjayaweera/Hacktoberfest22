#include<stdio.h>
// getting function error for void.
void main() {
  double first, second, temp;
  printf("Enter first number: ");
  //gettin error undefine scan.
  scan("%lf", &first);
  printf("Enter second number: ");
  //gettin error undefine scan.
  scan("%lf", &second);

  temp = first;
  
  first = second;

  second = temp;
  printf("\nAfter swapping, first number = %.2lf\n", first);
  printf("After swapping, second number = %.2lf", second);
  return 0;
}

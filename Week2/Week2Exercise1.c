#include <stdio.h>
#include <math.h>

/*
 * Using the math.h library (imported already), 
 * 
 * 1. Complete the pow3 function below so that takes as an argument a double and 
 * returns that value raised to the power of 3 
 * (hint use the pow function in the math library)
 *
 * 2. Create a function that takes as an argument a double and return the natural log 
 * of that value.  
 *
 * Demonstrate your functions by calling them the main function and printing out the
 * values returned 
*/

double pow3(double value){
  return value*value*value;
}

double ln(double value){
  return log(value);
}

int main(void) {
  printf("Enter a double value\n");
  double value;
  scanf("%lf", &value);
  double product = pow3(value);
  printf("Product of the value to the power of three is %lf\n", product);
  double ln_value = ln(value);
  printf("Natural log of entered value is %lf", ln_value);
  return 0;
}

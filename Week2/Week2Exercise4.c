#include <stdio.h>

/* 
 * Complete the recursive function below which performs multiplication of two 
 * numbers without using the inbuilt * sign
 */

int initial = 0;

int multiply(int number, int by){
  initial += number;
  by -= 1;
  if (by >0) {
    multiply(number, by);
  }
  return initial;
}

int main(void) {
  printf("The multiplication of 2 by 3 is %d\n", multiply(2,3));
  return 0;
}
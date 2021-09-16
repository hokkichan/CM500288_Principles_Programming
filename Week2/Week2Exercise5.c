#include <stdio.h>

/*
 * Complete the fibonacci function below such that it calculates the 
 * nth term of the Fibonacci sequence using iteration.
 * 
 * The first 4 terms of the Fibonacci sequence in this example 
 * are  1, 1, 2, 3
 * 
 * For example if we call fibonacci(1) we should get the value 1 returned,
 * if we call fibonacci(4) we should get the value 3 returned. 
 */

int fibonacci(int term){
  int current;
  int old = 1;
  int updated = 1;
  if (term == 1 || term == 2) {
    return 1;
  } else {
    for (int i=2; i<term; i++) {
    current = old + updated;
    old = updated;
    updated = current;
    } 
  }
  return current;
}

int main(void) {
  printf("fibonacci(4) is %d\n", fibonacci(4));
  return 0;
}

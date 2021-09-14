#include <stdio.h>
#include <stdbool.h>

/*
 * Write a function which returns true if a number is divisible by 3 and  
 * false if it is not.  Hint: use the modulo (%) operator.
 *
 * Modify your code so that your function now returns true if a number is divisible 
 * by 3 or 5 and false if it is not.
 *
*/

void checkDivBy3(int n) {
  bool div = false;
  if (n%3 == 0) {
    div = true;
  }
  printf("Divisibility by 3: ");
  printf(div ? "true" : "false");
}

void checkDivBy3or5(int n) {
  bool div = false;
  if (n%3 == 0 || n%5 == 0) {
    div = true;
  }
  printf("\nDivisibility by 3 or 5: ");
  printf(div ? "true" : "false");
}

int main(void) {
  checkDivBy3(35);
  checkDivBy3or5(35);
  return 0;
}

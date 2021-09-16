#include <stdio.h>

/* 
 Modify the function below so that it prints out the square multiplication tables for any number.  How might you modify this function, or add a new function, so it prints out the multiplication tables for any range of numbers?

 */

void printMultiples (int k, int n) {
  for (int i=1; i<n; i++) {
    printf("%d\t", k*i);
  }
}

void squareMultTable(int i, int j){
    for (int i=1; i<=j; i++) {
      printMultiples(i, j);
      printf("\n");
    }
  } 


int main(void) {
  squareMultTable(9, 10);
  return 0;
}
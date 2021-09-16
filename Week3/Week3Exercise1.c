#include <stdio.h>

/* 
 Modify the function below so that it prints out the square multiplication tables for any number.  How might you modify this function, or add a new function, so it prints out the multiplication tables for any range of numbers?

 */

void printMultiples (int index, int inline_Horz) {
  for (int i=1; i<=inline_Horz; i++) {
    printf("%d\t", index*i);
  }
}

void squareMultTable(int horz, int vert){
    for (int i=1; i<=vert; i++) {
      printMultiples(i, horz);
      printf("\n");
    }
  } 


int main(void) {
  squareMultTable(9, 7);
  return 0;
}
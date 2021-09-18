#include <stdio.h>
#include <string.h>

/* 
 * Modify the function below so that it copies the string from string1 into
 * string2 and prints out string2 in reverse.
 */

char string2[11];

void copyAndPrintArray(char string1[]){
  strcpy (string2, string1);
  int length2 = strlen(string1);
  for (int i=length2; i>0; i--) {
    printf("%c", string2[i-1]);
  }
}

int main(void) {
  char string1[11] = "my message";
  copyAndPrintArray(string1);
  return 0;
}

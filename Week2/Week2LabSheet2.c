#include <stdio.h>
#include <math.h>

/* 
 * Lab Sheet 2:
 */

/* Question 1: 
 
 Complete the function below which takes in an integer input between zero and one hundred (0 ≤ n ≤ 100) and prints out the number expressed in English text, with spaces and no dashes (–), e.g. for the number “33”, we would expect to see “thirty three”. Hint: you may want to create additional functions to help.
 
 Call this function from the main to test your program.
 */

void numberToText(int value){
  int remainder;
  if (value == 100) {
    printf("one hundred");
  } else if (value ==0) {
    printf("zero");
  } else if (value>=90) {
    printf("ninety ");
    remainder = value%90;
  } else if (value>=80) {
    printf("eighty ");
    remainder = value%80;
  } else if (value>=70) {
    printf("seventy ");
    remainder = value%70;
  } else if (value>=60) {
    printf("sixty ");
    remainder = value%60;
  } else if (value>=50) {
    printf("fifty ");
    remainder = value%50;
  } else if (value>=40) {
    printf("forty ");
    remainder = value%50;
  } else if (value>=30) {
    printf("thirty ");
    remainder = value%30;
  } else if (value>20) {
    printf("twenty ");
    remainder = value%20;
  } else remainder = value;
  switch (remainder) {
    case 1:
    printf("one");
    break;

    case 2:
    printf("two");
    break;

    case 3:
    printf("three");
    break;

    case 4:
    printf("four");
    break;

    case 5:
    printf("five");
    break;

    case 6:
    printf("six");
    break;

    case 7:
    printf("seven");
    break;

    case 8:
    printf("eight");
    break;

    case 9:
    printf("nine");
    break;

    case 10:
    printf("ten");
    break;

    case 11:
    printf("eleven");
    break;

    case 12:
    printf("twelve");
    break;

    case 13:
    printf("thirteen");
    break;

    case 14:
    printf("fourteen");
    break;

    case 15:
    printf("fifteen");
    break;

    case 16:
    printf("sixteen");
    break;

    case 17:
    printf("seventeen");
    break;

    case 18:
    printf("eighteen");
    break;

    case 19:
    printf("nineteen");
    break;

    case 20:
    printf("twenty");
    break;
    }
  printf("\n");
}

/* Question 2: 
 
 Complete the function below that calculates, and returns, the distance between two points.
 
 Call this function from the main to test your program. Hint: may wish to use the following print statement in your main function, or similar: 

 printf("%1.2f\n", calculateDistance(0, 0, 4, 3));
 */

double calculateDistance(int x1, int y1, int x2, int y2){
  return sqrt(pow((x1-x2), 2)+pow((y1-y2), 2));
}

/* Question 3: 
 
 Complete the function below that is given an integer, n, where 1 ≤ n ≤ 9999 and prints whether it is even, odd, or/and prime.  The output should be whole sentences for example, 

 1 is odd and not prime.
 2 is even and prime.
 3 is odd and prime.
 4 is even and not prime.
 5 is odd and prime
 
 Call this function from the main to test your program.
 */

void printOddEvenAndOrPrime(int n){
  printf("%d is ", n);
  if (n%2 == 0) {
    printf("even and ");
  } else printf("odd and ");
  int limit = sqrt(n)+1;
  //printf("%d", limit);
  int i;
  int prime = 1;
  for (i=2; i<=limit; ++i) {
    if (n ==2) {
      prime = 1;
      break;
    }
    if (n == 1 || n%i == 0) {
      prime = 0;
      break;
    } 
  }
  if (prime == 1) {
    printf("prime");
  } else printf("not prime");
}

int main(void) {
  numberToText(33);
  printf("%1.2f\n", calculateDistance(0, 0, 4, 3));
  printOddEvenAndOrPrime(5);
  return 0;
}

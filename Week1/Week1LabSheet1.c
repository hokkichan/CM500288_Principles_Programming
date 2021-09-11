#include <stdio.h>

void printHelloWorld(void);
void printXTenTimes(void);
void convertMetricToImperialHeights(void);
void fibonacci(void);
void volumeOfACylinder(void);

int main(void) {
  printf("Question 1\n");
  printHelloWorld();

  printf("\nQuestion 2\n");
  printXTenTimes();

  printf("\nQuestion 3\n");
  convertMetricToImperialHeights();

  printf("\nQuestion 4\n");
  fibonacci();

  printf("\nQuestion 5\n");
  volumeOfACylinder();
  return 0;
}

/* 
 * Lab Sheet 1:
 */

 /* Question 1: 
 
 Adapt the “HelloWorld” code below to produce a program that defines a variable capable of holding an integer of your choice. The program should add 3 to that number, multiply the result by 2, subtract 4, subtract twice the original number, add 3, then print the result and a new line.
 */
 
void printHelloWorld(void){
  int value = 15;
  int new_value = (value+3)*2-4-value*2+3;
  printf("New value is %d\n", new_value);
}

 /* Question 2: 
 
 Complete the function below so that it prints every integer from x to x + 10.  Do not use loops. 
 
 Call this function from the main to test your program.
 */

void printXTenTimes(void){
  int x=0;
   printf("%d\n", x);
   printf("%d\n", x+1);
   printf("%d\n", x+2);
   printf("%d\n", x+3);
   printf("%d\n", x+4);
   printf("%d\n", x+5);
   printf("%d\n", x+6);
   printf("%d\n", x+7);
   printf("%d\n", x+8);
   printf("%d\n", x+9);
   printf("%d\n", x+10);
}

 /* Question 3: 
 
 Complete the function below so that it converts the height of a person from centimetres to feet and inches. Use integer division (rounding down is acceptable, which is the default for integer division). 
 
 Hint: 254 cm is exactly 100 inches and 12 inches is exactly 1 foot. 
 
 Call this function from the main to test your program.  For example you could test your program with the follow five values, where "?" replaced with the true value.

 101 cm is 3 feet 3 inches to the nearest inch.
 3 cm is 0 feet 1 inches to the nearest inch.
 15 cm is ? feet ? inches to the nearest inch.
 192 cm is ? feet ? inches to the nearest inch.
 124 cm is ? feet ? inches to the nearest inch.
 */

void convertMetricToImperialHeights(void){
  int length = 101*100/254;
  int foot = length/12;
  int inch = length%12;
  printf("Converted height is %d feet %d inches\n", foot, inch);
}

 /* Question 4: 
 
 Complete the function below so that it uses three variables (current, previous, next) to calculate and print out the first ten numbers of the Fibonacci sequence, each on a new line: i.e. the first four lines should be as follows:

 0 
 1 
 1 
 2
 
 Call this function from the main to test your program.
 */

 void fibonacci(void){
   int fib[10];
   // = {0, 1, 1, 0, 0, 0, 0, 0, 0, 0};
   fib[0] = 0;
   fib[1] = 1;
   fib[2] = 1;
   printf("%d\n", fib[0]);
   printf("%d\n", fib[1]);
   printf("%d\n", fib[2]);
   for (int i=3; i<9; i++) {
     fib[i] = fib[i-2] + fib[i-1];
     printf("%d\n", fib[i]);
   }

 }

 /* Question 5: 
 
 Complete the function below so that it uses two variables: height and radius. Use these two variables and print to the screen, the volume of a cylinder. 

 Call this function from the main to test your program.  For example, you could test your program with the following values, 

 height 7.0cm and radius 4.0cm
 height 20.0cm and radius 3.0cm
 height 14.7cm and radius 5.2cm
 
 Which print out, the cylinder with height 7.0cm and radius 4.0cm has a volume of 351.86cm^3
 
*/

void volumeOfACylinder(void){
  double height =7.0;
  double radius = 4.0;
  double pi = 3.141593;
  double volume= radius*radius*height*pi;
  printf("Volume is %.2lfcm^3\n", volume);
}
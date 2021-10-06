
/*
 * Implement the methods below.
 */ 

class Main {
  public static void main(String[] args) {
    Main m = new Main();
    System.out.println(m.isModThree(90));
    System.out.println(m.multiply(9, 8));
    System.out.println(m.fib(5));
  }

  // Method which returns true if a number is divisible by 3 and  
  // false if it is not.  Hint: use the modulo (%) operator.
  public boolean isModThree(int n){
    if (n%3 == 0) {
      return true;
      } else return false;
  }

  // Recursive method which performs multiplication of two 
  // numbers without using the inbuilt * sign
  public int multiply(int n, int by){
    int base = 0;
    while (by >0) {
      base += n;
      multiply(n, by-=1);
    } 
    return base;
  }

  /*
   * Complete the fibonacci method below such that it calculates the 
   * nth term of the Fibonacci sequence using iteration.
   * 
   * The first 4 terms of the Fibonacci sequence in this example 
   * are  1, 1, 2, 3
   *
   * For example if we call fibonacci(1) we should get the value 1 returned,
   * if we call fibonacci(4) we should get the value 3 returned. 
   */
   public int fib(int term){
     int term1 = 1;
     int term2 = 1;
     int newTerm = 1;
     for (int i=2; i<term; i++) {
      newTerm = term1+term2;
      term1 = term2;
      term2 = newTerm;
     }
     return newTerm;
   }
}

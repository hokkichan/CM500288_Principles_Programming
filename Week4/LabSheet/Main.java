/* 
 * Lab Sheet 4
 */

/* Question 1
 Make a BankAccount Class. This Class should provide a constructor, three mutators and three accessors of the type that a bank account might need. 
 
 In the Main class (i.e. this class) create two different BankAccount instances from its main method (i.e. two BankAccount objects). Demonstrate the use of your mutators and accessors within that same main method.
*/

class Main {
  public static void main(String[] args) {
    Customer Steve = new Customer (500.0);
    Steve.enquireBalance();
    Steve.addBalance(300.0);
    Steve.withdrawBalance(100.0);
    Steve.withdrawBalance(900.0);
    Steve.withdrawBalance(600.0);
    Steve.enquireBalance();
    Customer Shannon = new Customer (500.0);
    Shannon.enquireBalance();
  }
}

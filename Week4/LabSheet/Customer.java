public class Customer {
  private double balance;
  
  
  public Customer (double balance){
    this.balance = balance;
  }

  public void addBalance(double amount){
    balance += amount;
    System.out.print("Added amount is " + amount + "\nYour new balance is " + balance + "\n---------\n");
  }

  public void withdrawBalance(double amount){
    if (balance>= amount) {
      balance -= amount;
      System.out.print("Withdrawn amount is " + amount + "\nYour new balance is " + balance + "\n---------\n");
    } else {
      System.out.print("Error - insufficient balance. \nYour available limit for withdrawal is " + balance + "\n---------\n");
    }
  }

  public void enquireBalance() {
    System.out.print("Your balance is " + balance + "\n---------\n");
  }
  
}

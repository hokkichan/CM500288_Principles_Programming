import java.util.Scanner;
import java.util.Date;
/*
 * Implement below a method (or methods) which allows the user to
 * type in their name, age and height in cm and prints to the terminal
 * their name, age, year of birth and height in feet and inches.
 * 
 * For example, you might print out, 
 *
 * "Hello <name>, you are <age> and were born in <year>. 
 * You are <?> feet and <?> inches tall"
 */

class Main {
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);
    System.out.println("Please enter your name");
    String name = s.next();
    System.out.println("Please enter your age");
    int age = s.nextInt();
    System.out.println("Please enter your height in cm");
    double height = s.nextDouble();
    int heightFeet = (int) (height/30.48);
    double heightInch = (height%30.48)/2.54;
    Date d=new Date();
    int year = d.getYear();
    int birthYear = year - age + 1900;
    System.out.println("Hello " + name + ", you are " + age + " and were born in " + birthYear + ".");
    System.out.println("You are " + heightFeet + " feet and " + String.format("%.1f", heightInch) + " inches tall");
        
  }
}

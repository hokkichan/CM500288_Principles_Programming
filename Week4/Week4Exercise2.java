class Main {

  public static void main(String[] args) {
    Main m = new Main();
    String s = "This is an example string";
    m.printCharsInString(s);
    System.out.println();
    m.printStringInReverse(s);
    System.out.println();
    m.printStringInUppercase(s);
    System.out.println();
    m.encryptText("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 3);
    System.out.println();
    m.decryptText("DEFGHIJKLMNOPQRSTUVWXYZABC", 3);
  }

  /*
  * Modify the method below so that it prints out each character in the string
  * on a new line.
  */

  public void printCharsInString(String s){
    int strLen = s.length();
    for (int i=0; i<strLen; i++) {
      System.out.println(s.charAt(i));
    }
  }

  /*
  * Modify the method below so that it prints out
  * the string in reverse order
  */

  public void printStringInReverse(String s){
    int strLen = s.length();
    for (int i=strLen-1; i>=0; i--) {
      System.out.print(s.charAt(i));
    }
  }

  /*
  * Modify the method below so that it prints out
  * the string as all uppercase
  */

  public void printStringInUppercase(String s){
    System.out.println(s.toUpperCase());
  }

  /*
  * Implement the method below which encrypts the
  * text passed in as an argument using a 
  * Ceaser cypher.  
  * 
  * https://en.wikipedia.org/wiki/Caesar_cipher
  * 
  * This is illustrated below 
  *
  * input string = "ABC"
  * shift by = 3
  * encrypted text = "DEF"
  */
  public void encryptText(String s, int shiftBy){
    int strLen = s.length();
    for (int i=0; i<strLen; i++) {
      if ((int)(s.charAt(i)+shiftBy) <= 90) {
        System.out.print((char)(s.charAt(i)+shiftBy%26));
      } else {
        System.out.print((char)(s.charAt(i)+shiftBy-26));
      }
    } 
  }

  /*
  * Implement the method below which decrypts a
  * Ceaser cypher encrypted message
  *
  */

  public void decryptText(String s, int shiftBy){
    int strLen = s.length();
    for (int i=0; i<strLen; i++) {
      if ((int)(s.charAt(i)-shiftBy) >= 65) {
        System.out.print((char)(s.charAt(i)-shiftBy%26));
      } else {
        System.out.print((char)(s.charAt(i)-shiftBy+26));
      }
    } 
  }

}
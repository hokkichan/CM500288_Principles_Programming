public class Main {

  public static void main(String[] args) {
    Counter hours = new Counter(24, 1);
    Counter mins = new Counter(60, 59);
    Counter sec = new Counter(60, 58);
    Counter min_sec = new Counter(1000, 999);

    int i = 0;
    while(i < 10){
      System.out.println(hours.printCount() + " : " + 
                          mins.printCount() + " : " + 
                          sec.printCount() + " : " + 
                          min_sec.getCount());
      
      sec.tick();
      if(sec.getCount() == 0){
        mins.tick();
        if(mins.getCount() == 0){
          hours.tick();
        }
      }

      i++;
    }
  }
}

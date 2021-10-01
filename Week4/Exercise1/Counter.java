public class Counter {
  private int limit;
  private int count;
  
  public Counter(int limit){
    this.limit = limit;
    count = 0;
  }
  
  public Counter(int limit, int count){
    this.limit = limit;
    this.count = count;
  }
  
  public int getCount(){
    return count;
  }

  public String printCount() {
    if (count < 10) {
      return ("0" + Integer.toString(count));
    } else return Integer.toString(count);
  }
  
  public void tick(){
    if(count == (limit-1)){
      count = 0;
    }
    else{
      count ++;
    }
  }
  
}

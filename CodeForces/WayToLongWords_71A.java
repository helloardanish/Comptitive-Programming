import java.util.Scanner;

/**
 *
 * @author A R DANISH
 */
public class Way_too_long_words_71A {
  
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    
    int num = sc.nextInt();
    if(num>100){
      System.err.println("Enter number again");
      num=sc.nextInt();
    }
    String[] allWords = new String[num];
    sc.nextLine();
    for(int i=0; i<num; i++){
      allWords[i] = sc.nextLine();
    }
    for(int i=0; i<num; i++){
      int numOfChar = allWords[i].length();
      
      if(numOfChar>10){
      char first = allWords[i].charAt(0);
      char last = allWords[i].charAt(numOfChar-1);
      String ans = first+String.valueOf(numOfChar-2)+last;
      System.out.println(ans);
      }else{
        System.out.println(allWords[i]);
      }
    }
    
  }
  
}

import java.util.Scanner;

/**
 *
 * @author A R DANISH
 */
public class Theatre_Square_1A {
  
  public static void main(String[] args) {
  
    Scanner sc = new Scanner(System.in);
    
  long recL, recB, sheetLength;
  recL = sc.nextInt();
  recB = sc.nextInt();
  sheetLength = sc.nextInt();
  
  long noOfLength = recL/sheetLength;
  long noOfBreadth = recB/sheetLength;
  
  if(recL%sheetLength!=0){
    noOfLength = noOfLength+1;
  }
  
  if(recB%sheetLength!=0){
    noOfBreadth = noOfBreadth+1;
  }
  
  long ans = noOfLength * noOfBreadth;
  
  System.out.println(ans);
  }
  
}

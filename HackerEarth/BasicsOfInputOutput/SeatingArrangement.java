import java.util.Scanner;
/**
 *
 * @author A R DANISH
 */
public class SeatingArrangement {
  
  
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int[] arr = new int[] {1, 11, 9, 7, 5, 3};
    int[] arrRev = new int[]{11, 1, 3, 5, 7, 9};
    int arrNum[] = new int[n];
    for(int i=0; i<arrNum.length; i++){
      arrNum[i] = sc.nextInt();
    }
    
    
    for(int i =0; i<arrNum.length; i++){
      int rem = arrNum[i]%6;
      int value;
      int checkCompartment = arrNum[i]%12;
      if(checkCompartment==0 || checkCompartment>6){
        value = arrNum[i]-arrRev[rem];
      }else{
        value = arrNum[i]+arr[rem];
      }
      String str;
      switch (rem) {
        case 5:
        case 2:
          str = "MS";
          break;
        case 0:
        case 1:
          str = "WS";
          break;
        default:
          str = "AS";
          break;
      }
      System.out.println(value+" "+str);
      }
    }
  }

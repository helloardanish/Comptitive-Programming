import java.util.Scanner;
/**
 *
 * @author A R Danish
 */
public class FindProduct {

    public static void main(String[] args){ 
      Scanner sc = new Scanner(System.in);
      
      //number of inputs
      int n = sc.nextInt();
      //create an array to store numbers
      int arr[] = new int[n];
      for(int i=0; i<arr.length; i++){
        arr[i] = sc.nextInt();
      }
      //initilize a value
      long result=1;
      for(int i=0; i<arr.length; i++){
        result = (long) ((result*arr[i])%(Math.pow(10, 9)+7));
      }
      System.out.println(result);
    }

}

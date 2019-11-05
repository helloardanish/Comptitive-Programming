import java.util.Scanner;

/**
 *
 * @author A R DANISH
 */



public class Watermelon_4A {

//main function
public static void main(String args[]){
 
  Scanner sc = new Scanner(System.in);
  
  int weight = sc.nextInt();
  
  if(weight<=2){
    System.out.println("NO");
  }else if(weight%2==0){
    System.out.println("YES");
  }else{
    System.out.println("NO");
  }
  
}
}

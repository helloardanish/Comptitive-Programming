import java.util.Scanner;

/**
 *
 * @author A R DANISH
 */
public class NextRound_158A {
  
  public static void main(String[] args) {
    
    Scanner sc = new Scanner(System.in);
    
    int selectedContestant = 0;
    
    int max;
    int[] contestant = new int[50];
    int n, k;
    n=sc.nextInt();
    k=sc.nextInt();
    
    for(int i=0; i<n; i++){
      contestant[i]=sc.nextInt();
//      if(i+1==k){
//        max=contestant[i];
//    }
    }
    
    for(int i=0; i<n; i++){
      if(contestant[i]>=contestant[k-1] && contestant[i]>0){
        selectedContestant++;
      }
    }
    
    System.out.println(selectedContestant);
  }
  
}

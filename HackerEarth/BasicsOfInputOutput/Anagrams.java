
import java.util.Scanner;


/**
 *
 * @author A R DANISH
 */
public class Anagrams {
  
  static int minNoRemAnagram(String str1, String str2){
    
    //creating hash array for each string
    int count1[] = new int[26];
    int count2[] = new int[26];
    
    //number of item need to remove
    int noofitemrem = 0;
    
    //calculating frequency of each character
    for(int i=0; i<str1.length(); i++){
      count1[str1.charAt(i) - 'a']++;
    }
    for(int i=0; i<str2.length(); i++){
      count2[str2.charAt(i) - 'a']++;
    }
    //traverse count arrays for calculate the number of character to be removed
    
    for(int i=0; i<26; i++){
      noofitemrem += Math.abs(count1[i]-count2[i]);
    }
    return noofitemrem;
  }
  
  
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int noOfTc = sc.nextInt();
    sc.nextLine();
    String[] arr = new String[noOfTc*2];
    for(int i=0; i<arr.length; i++){
      arr[i] = sc.nextLine();
    }
    for(int i=0; i<arr.length; i+=2){
      System.out.println(minNoRemAnagram(arr[i], arr[i+1]));
    }
  }
  
}

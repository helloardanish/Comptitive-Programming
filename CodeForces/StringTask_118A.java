import java.util.Scanner;

/**
 *
 * @author A R DANISH
 */
public class StringTask_118A {
    
  public static void main(String[] args) {    
    Scanner sc = new Scanner(System.in);
    String word = sc.nextLine();
    //remove all the vowels
    word = word.replaceAll("[aAeEiIoOuU]","");
    
    
    char[] myArray = word.toCharArray();
    StringBuilder sb = new StringBuilder(word);
    
    //from lowercase to uppercase
    for(int i=0; i<word.length(); i++){
      char c = sb.charAt(i);
      if(Character.isUpperCase(c)){
        sb.setCharAt(i, Character.toLowerCase(c));
      }
    }
    
    //printing the string
    for(int i=0; i<sb.length(); i++){
      char c = sb.charAt(i);
      System.out.print("."+c);
    }
  }
  
}


import java.util.ArrayList;
import java.util.Scanner;

/**
 *
 * @author A R DANISH
 */
public class VowelRecoginition {
  
  
  
  public static void main(String[] args) {
  
    Scanner sc = new Scanner(System.in);
    int noi = sc.nextInt();
    sc.nextLine();
    int count = 0;
    String[] arr = new String[noi];
    
    
    //store the value given by user
    for(int i=0; i<noi; i++){
      arr[i] = sc.nextLine();
    }
    
    
    //an arraylist to add substring
    ArrayList<String> arrLis = new ArrayList<>();
    
    //creating substring of each text and adding in arraylist
    for (String text : arr) {
      for (int j = 0; j < text.length(); j++) {
        for (int k = j+1; k <= text.length(); k++) {
          
          String subString = text.substring(j, k);
          //System.out.print(subString+" ");
          arrLis.add(subString);
        }
      }
      
      
      //count the vowels
      for(int l=0; l<arrLis.size();l++){
        String myString = arrLis.get(l);
        //System.out.println(myString);
        for(int m=0; m<myString.length();m++){
          if((myString.charAt(m)== 'a')
                  || (myString.charAt(m)== 'e')
                  || (myString.charAt(m)== 'i')
                  || (myString.charAt(m)== 'o')
                  || (myString.charAt(m)== 'u')
                  || (myString.charAt(m)== 'A')
                  || (myString.charAt(m)== 'E')
                  || (myString.charAt(m)== 'I')
                  || (myString.charAt(m)== 'O')
                  || (myString.charAt(m)== 'U')
                  ){
            count++;
          }
        }
      }
      System.out.println(count);
      arrLis.clear();
      count =0;
    }
    
  }
}

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package codeforces;

import java.util.Scanner;

/**
 *
 * @author A R DANISH
 */
public class ATeam {
  
  
  public static void main(String[] args){
    
    Scanner sc = new Scanner(System.in);
    int noOfProblem;
    //int count=0;
    int finalCount=0;
    
    noOfProblem = sc.nextInt();
    
    int num = noOfProblem*3;
    
    int arr[] = new int[num];
    
    for(int i=0; i<num; i++){
      arr[i] = sc.nextInt();
    }
    for(int i=0; i<num; i+=3){
      
      if((arr[i]==1&&arr[i+1]==1)||(arr[i+1]==1&& arr[i+2]==1)||(arr[i+2]==1&&arr[i]==1)){
        finalCount++;
      }
//      
//      if(arr[i]==1){
//        count++;
//      }
//      if(arr[i+1]==1){
//        count++;
//      }
//      if(arr[i+2]==1){
//        count++;
//      }
//      if(count>=2){
//        finalCount++;
//        count=0;
//      }
    }
    
    System.out.println(finalCount);
  }
  
}

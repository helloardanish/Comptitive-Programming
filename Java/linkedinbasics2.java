import java.io.*;

public class LinkedInBasics
{
    Node head;
    
    static class Node{
        int data;
        Node next;
        
        Node(int d){
            this.data=d;
            next = null;
        }
    }
    
    public static LinkedInBasics insertData(LinkedInBasics myllist, int dt){
        Node newNode = new Node(dt);
        newNode.next = null;
        
        if(myllist.head == null){
            myllist.head=newNode;
        }else{
            Node lastNode = myllist.head;
            while(lastNode.next!=null){
                lastNode = lastNode.next;
            }
            lastNode.next = newNode;
        }
        return myllist;
    }
    
    public static void printLList(LinkedInBasics myllist){
        Node currNode = myllist.head;
        while(currNode!=null){
            System.out.println("Data >>  "+currNode.data);
            currNode = currNode.next;
        }
    }
    public static void main(String[] args) {
        LinkedInBasics mylist = new LinkedInBasics();
        insertData(mylist, 1);
        insertData(mylist, 2);
        insertData(mylist, 3);
        insertData(mylist, 4);
        insertData(mylist, 5);
        insertData(mylist, 6);
        printLList(mylist);
    }
}

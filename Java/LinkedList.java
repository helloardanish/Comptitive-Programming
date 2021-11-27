// Linked List Implementation


class Node{    
        int data;
        Node next;
        
        public Node(int d) {
            data = d;
            next = null;
        }
        public void setData(int data){
            this.data = data;
        }
        
        public int getData(){
            return data;
        }
        
        public void setNext(Node next){
            this.next = next;
        }
        
        public Node getNext(){
            return next;
        }
    } 

public class LinkedList
{
    Node head;
    public static LinkedList isertAData(LinkedList myllist, int data){
        Node newNode = new Node(data);
        newNode.next = null;
        if(myllist.head==null){
            myllist.head = newNode;
        }else{
            Node lastNode = myllist.head;
            while(lastNode.next != null){
                lastNode = lastNode.next;
            }
        }
        return myllist;
    }
    
    public static void printLinkedList(LinkedList myllist){
        Node currNode = myllist.head;
        while(currNode != null){
            System.out.println("Data >> "+currNode);
            currNode = currNode.next;
        }
    }
    public static void main(String[] args) {
        LinkedList list = new LinkedList();
        list = isertAData(list,1);
        list = isertAData(list,2);
        list = isertAData(list,3);
        list = isertAData(list,4);
        printLinkedList(list);
    }
}


// Implementation done for adding data at the end of the list

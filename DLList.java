public class DLList
{
    class Node{
        int data;
        Node prev;
        Node next;
        Node(int d){
            this.data = d;
        }
    }
    Node head=null;
    Node tail=null;
    public void insertAData(int data){
        Node newNode = new Node(data);
        newNode.next = null;
        if(head==null){
            head=newNode;
            tail=newNode;
            head.prev=null;
            tail.next=null;
        }else{
            tail.next=newNode;
            newNode.prev=tail;
            tail=newNode;
            tail.next=null;
        }
    }
    public void printLlist(){
        Node currNode = head;
        if(head==null){
            System.out.println("List is empty");
            return;
        }
        while(currNode!=null){
            System.out.println("Data "+currNode.data);
            currNode = currNode.next;
        }
    }
    public static void main(String[] args) {
        DLList myllist = new DLList();
        myllist.insertAData(2);
        myllist.insertAData(7);
        myllist.insertAData(8);
        myllist.insertAData(9);
        myllist.insertAData(4);
        myllist.printLlist();
    }
}

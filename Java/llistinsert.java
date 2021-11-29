public class LList
{
    Node head;
    static class Node{
        int data;
        Node next;
        Node(int d){
            this.data = d;
            next = null;
        }
    }
    public static LList insertAData(LList llist, int data){
        Node newNode = new Node(data);
        newNode.next = null;
        if(llist.head==null){
            llist.head=newNode;
        }else{
            Node lastNode = llist.head;
            while(lastNode.next!=null){
                lastNode = lastNode.next;
            }
            lastNode.next = newNode;
        }
        return llist;
    }
    
    public static void printLlist(LList llist){
        Node currNode = llist.head;
        while(currNode!=null){
            System.out.println("Data "+currNode.data);
            currNode = currNode.next;
        }
    }
    public static void main(String[] args) {
        LList myllist = new LList();
        insertAData(myllist, 1);
        insertAData(myllist, 2);
        insertAData(myllist, 3);
        insertAData(myllist, 4);
        insertAData(myllist, 5);
        insertAData(myllist, 6);
        insertAData(myllist, 7);
        insertAData(myllist, 8);
        printLlist(myllist);
    }
}

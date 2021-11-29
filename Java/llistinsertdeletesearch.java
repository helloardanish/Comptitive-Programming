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
    
    public static LList deleteANodeFromLList(LList llist, int data){
        if(llist.head==null){
            System.out.println("List is empty please insert some data!");
            return llist;
        }else{
            Node prevNode = llist.head;
            if(prevNode.data==data){
                llist.head = prevNode.next;
                System.out.println("Found at starting index and deleted!");
                return llist;
            }
            Node currNode = prevNode.next;
            while(currNode.data!=data && currNode.next!=null){
                prevNode = currNode;
                currNode = currNode.next;
            }
            if(currNode.data==data){
                prevNode.next = currNode.next;
                System.out.println("Found and deleted!");
                return llist;
            }
            if(currNode.next == null){
                System.out.println("Data not present in Linked List!");
                return llist;
            }
            
        }
        return null;
    }
    
    public static boolean searchADataInLList(LList llist, int d){
        Node currNode = llist.head;
        if(currNode.data==d){
            System.out.println("First element in linked list is "+d);
            return true;
        }
        while(currNode.data!=d && currNode.next!=null){
            currNode = currNode.next;
        }
        if(currNode.data==d){
            System.out.println("Found!");
            return true;
        }
        if(currNode.next==null){
            System.out.println("Data not found and iteration ended!");
            return false;
        }
        
        return false;
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
        deleteANodeFromLList(myllist,5);
        printLlist(myllist);
        searchADataInLList(myllist, 6);
        boolean isDataPresent = searchADataInLList(myllist, 8);
        String myans;
        if(isDataPresent){
            myans="yes";
        }else{
           myans="no"; 
        }
        System.out.println("Checking if 8 is present : "+myans);
    }
}

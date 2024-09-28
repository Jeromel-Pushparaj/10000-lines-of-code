package datastructures;
class Node{
    int data;
    Node next;

    public Node(int data){
        this.data = data;
        this.next = null;
    }
}

class LinkedList{
    Node head;
    public LinkedList(){
        this.head = null;
    }
    public void insertAtBegi(int data){
        Node newNode = new Node(data);
        newNode.next = head;
        head = newNode;
    }
    public void deleteAtBegi(){
        if(head==null){
            System.out.println("This LL is empty");
            return;
        }
        head=head.next;
    }
    public void display(){
        if(head==null){
            System.out.println("This LL is empty");
            return;
        }
        Node CurrentNode = head;
        while (CurrentNode!=null){
            System.out.println(CurrentNode.data);
            CurrentNode = CurrentNode.next;
        }

    }
}
public class Alpha{

public static void main(String[] args){
    LinkedList obj = new LinkedList();
    obj.insertAtBegi(10);
    obj.insertAtBegi(30);
    obj.insertAtBegi(40);
    obj.insertAtBegi(60);
    obj.insertAtBegi(50);
    obj.insertAtBegi(70);
    System.out.println("List......");
    obj.display();
    obj.deleteAtBegi();
    System.out.println("List after deletion: ....");
    obj.display();

}
}
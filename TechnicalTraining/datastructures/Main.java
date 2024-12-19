package datastructures;

public class Main {
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

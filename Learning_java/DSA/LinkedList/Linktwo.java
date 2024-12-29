import java.util.*;

class Linktwo{
  Node head;
  class Node{
    int data;
    Node next;

    Node(int d){
      data = d;
      next null;
    }

  }

  public void insert_at_the_end(int element){
    Node newNode = new Node(element);
    if(head == null)
    {
      head = new Node(element);
      return;

    }

    newNode.next = null;
    Node last = head;

    while (last.next != null){
      last = last.next;
    }

    last.next = newNode;
    return;
  }

  public void insert_at_the_begining(int element){

  }

  public void printlist(){
    Node temp = head;
    while (temp != null){
      System.out.print(temp.data + "");
      temp = temp.next;
    }
  }

  public public static void main(String[] args) {
    Linktwo l = new Linktwo();
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int i, element;
    for(i = 1; i<=n;i++){
      element = sc.nextInt();
      l.insert_at_the_end(element);j
    }
    l.printlist();
    
  }
}

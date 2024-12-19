class C implements Runnable{
    public void run(){
        for(int i=0;i<5;i++){
            System.out.println("hi");
            try{
                Thread.sleep(500);
            }catch(InterruptedException e){
                e.printStackTrace();
            }
        }
    }
}
class D implements Runnable{
    public void run(){
        for(int i=0;i<5;i++){
            System.out.println("Hello");
            try{
                Thread.sleep(500);
            }catch(InterruptedException e){
                e.printStackTrace();
            }
        }
    }
}
public class multithreading3 {
    public static void main(String[] args){
        C obj = new C();
        D obj2 = new D();

        Thread t1 = new Thread(obj);
        Thread t2 = new Thread(obj2);

        t1.start();
        t2.start();
    }
}

class Aa extends Thread{
    public void run(){
        for(int i=0;i<5;i++){
            System.out.println("Hello");
            try{
                Thread.sleep(1000);
            }
            catch(InterruptedException e){
                e.printStackTrace();

            }
        }
    }
}

class Bb extends Thread{
    public void run(){
        for(int i=0;i<5;i++){
            System.out.println("Hi");
            try{
                Thread.sleep(1000);
            }catch(InterruptedException e){
                e.printStackTrace();
            }
        }
    }
}
public class multithreading2 {
    public static void main(String[] args){
        Aa obj = new Aa();
        Bb obj2 = new Bb();
        obj.start();
        obj2.start();
    }
}

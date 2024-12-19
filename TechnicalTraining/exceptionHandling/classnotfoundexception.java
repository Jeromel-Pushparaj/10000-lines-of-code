package exceptionHandling;

public class classnotfoundexception {
    public static void main(String[] args) {
        try{
            Class.forName("classroom.Mainsdf");

        }catch(ClassNotFoundException e){
            System.out.println(e);
        }
    }
}

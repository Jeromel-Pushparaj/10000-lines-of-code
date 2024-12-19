package exceptionHandling;

public class stringexception {
    public static void main(String[] args) {
        String s = "Hello";

        try{
            System.out.println(s.charAt(8));
        }catch(StringIndexOutOfBoundsException e){
            System.out.println(e);
        }
        finally{
            System.out.println("Hello Minnal");
        }
    }
}

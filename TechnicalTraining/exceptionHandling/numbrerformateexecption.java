package exceptionHandling;

public class numbrerformateexecption {
public static void main(String[] args) {
    String s="12345";
    try{
        int n = Integer.parseInt(s);
    
    }catch(NumberFormatException e){
        System.out.println(e);
    }
    finally{
        System.err.println("Ended ");
    }
}
}

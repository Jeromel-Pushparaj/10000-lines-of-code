package exceptionHandling;

public class arrayindex {
    public static void main(String[] args) {
        int a[] = {2, 5, 3, 7, 8};
        int len = a.length;

        try{
            for(int i=0;i<=len;i++){
                System.out.println(a[i]);
            }
        }catch(ArrayIndexOutOfBoundsException e){
            System.out.println(e);
        }finally{
            System.out.println("Hi Rohinth");
        }
    }
}

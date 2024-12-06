public class coin {
   public static void main(String[] args) {
    int a[] = {1, 6, 5, 9};
    int t = 11;

    for (int i = a.length; i >=0; i++){
            if(a[i] + a[i+1] == t){
                System.out.println(a[i] + " : " + a[i+1]);
            }
    }
   } 
}

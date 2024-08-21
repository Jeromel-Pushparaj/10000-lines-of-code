public class asciisep {
    public static void main(String[] args) {
        String s = "Hello";
        String s1 = "";
        String s2 = "";
        int size = s.length();
        for(int i=0;i<size;i++){
            char c = s.charAt(i);
            if(c>=65 && c<=90){
                s1 = s1+c;
            }else if(c>=95 && c<=122){
                s2 = s2+c;
            }
        }
        System.out.println(s1);
        System.out.println(s2);
    }
}

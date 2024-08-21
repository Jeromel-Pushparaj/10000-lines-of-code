public class stringtimes {
    public static void main(String[] args) {
        String s = "a2b4c1d5";
        for(int j=0;j<s.length();j++){
            char ch = s.charAt(j);
            if(ch>=48 && ch<=57){
                int n= ch-48;
                for(int i=0;i<n;i++){
                    System.out.print(s.charAt(j-1));
                }
                
            }
            
        }
    }
}

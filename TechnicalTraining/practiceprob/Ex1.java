package practiceprob;

public class Ex1 {
    public static void main(String[] args){
        int[] array = new int[]{ 1,2,3,4,5,6,7,8}; 
        int oddsum=0;
        int evensum=0;
        for(int i=0; i<array.length;i++){
            if(array[i]%2==0){
                evensum += array[i];
            }else{
                oddsum += array[i];
            }
        }
        System.out.println("Sum of Odd number in the array is " + oddsum);
        System.out.println("Sum of Even number in the array is " + evensum);



    }

}

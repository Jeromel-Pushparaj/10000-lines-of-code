package javaproblems;
public class duplicateInArray {
    public static void main(String[] args) {
        int[] nums = {1, 2, 3, 4};
        int len = nums.length;
        // int count = 0;
        boolean flag = false;
        for(int i=0;i<len;i++){
            // int c = nums[i];
            for(int j=i;j<len-1;j++){
                
                if(nums[i]==nums[j+1]){
                    // System.out.println("i " + i + " j " + j);
                    flag = true;
                    break;
                }
            }
        }
        if(flag){
            System.out.println("true");
        }else{
            System.out.println("false");
        }
    }
}

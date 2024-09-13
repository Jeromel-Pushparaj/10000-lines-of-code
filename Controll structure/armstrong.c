#include<stdio.h>
#include<math.h>

int main(){
    int num, original_num, reminder, n=0;
    float result = 0.0;

    printf("Enter the number: ");
    scanf("%d", &num);

    original_num = num;
    // here we check how many digit
    for(original_num = num; original_num != 0; ++n){
        original_num /= 10;
    }

    original_num = num;
    //here we seperating the digit and power it with n add to the result
    while(original_num != 0){
        reminder = original_num % 10;
        result += pow(reminder, n);
        original_num /= 10;
    }
    // here we are checking the result with the original number
    if((int)result == num){
        printf("Armstrong number\n");
    }else{
        printf("Not a Armstrong number\n");
    }
    return 0;
}

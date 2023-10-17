
#include <stdio.h>

int main(){
    int num1_ex3, num2_ex3 = 0;
    scanf("%d%d",&num1_ex3,&num2_ex3);
    if (num1_ex3 == (num1_ex3/num2_ex3 * num2_ex3)){
        prinf("yes");
    }
    else{
        print("no");
    }
    return 0;
}
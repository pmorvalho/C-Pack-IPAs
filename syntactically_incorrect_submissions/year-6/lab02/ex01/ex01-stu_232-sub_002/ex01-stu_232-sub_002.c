
#include <stdio.h>

int main(){
    int num = -10e6;
    int intermediate_num;
    
    for (int i = 0; i < 3; i++){
        scanf("%d", &intermediate_num);
        if (intermediate_num > num){
            num = intermediate_num;
        }
    }

    printf("%d\n", num);
}
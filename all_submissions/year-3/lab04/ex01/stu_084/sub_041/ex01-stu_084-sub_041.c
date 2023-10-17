
#include <stdio.h>
#define VECMAX 100

int main(){
    int n, j, k, i, m = 0, nums[VECMAX];
    char c;
    
    scanf("%d", &n);
    while(n > VECMAX)
        scanf("%d", &n);

    c = getchar();
    for(i = 0; c != EOF; i++){
        if (c >= '0' && c <= '9')
            nums[i] = c;
        c = getchar();
    }
    for(j = 0; j <= i; j++){
        if(nums[j] >= '0' && nums[j] <= '9'){
            m = nums[j];
            for(k = 0; k < (m - '0'); k++){
                printf("*");
            }
            if(j != i - 1)
                printf("\n"); 
        }
               
    }
    return 0;
}
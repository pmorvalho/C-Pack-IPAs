
#include <stdio.h>

int main(){
    int n, num, i, j, k, maior = 0;
    scanf("%d", &n);
    int nums[n];
    for(i=0; i<n; i++){
        scanf("%d", &num);
        nums[i] = num;
        if(num > maior)
            maior = num;
    }
    for(j=maior; j>=1; j--){
        for(k=0; k<n; k++){
            if(nums[k]>=j)
                printf("*");
            else   
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
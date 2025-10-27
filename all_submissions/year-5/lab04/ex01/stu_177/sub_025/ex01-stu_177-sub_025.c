
#include <stdio.h>

int main(){
    int n, num, i, j;
    scanf("%d", &n);
    int nums[n];
    for(i=0; i < n; i++){
        scanf("%d", &num);
        nums[i] = num;
    }
    i = 0;
    for(i=0; i<n; i++){
        for(j=1; j<=nums[i]; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
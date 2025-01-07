
#include <stdio.h>

#define VECMAX 100



int main(void) {
    int n, i, max = 0;
    scanf("%d", &n);
    if (n >= VECMAX) 
        return 1;
    int nums[n], nums_aux[n];

    
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        if (nums[i] > max) 
            max = nums[i];
    }

    
    int a, b;
    for (a = 0; a < max; a++) {
        for (b = 0; b < n; b++) {
            if (nums[b] < max) {
                printf(" ");
                nums[b]++;
            }
            else 
                printf("*");
        }
        printf("\n");
    }

}
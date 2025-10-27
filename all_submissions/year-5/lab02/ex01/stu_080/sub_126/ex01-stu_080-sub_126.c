
#include <stdio.h>

int main(){
    int n;
    int max = 0;

    for (int i = 0; i < 3; i++){
        scanf("%d", &n);
        max = max < n ? n : max; 
    }

    printf("%d\n", max);
    return 0;
}
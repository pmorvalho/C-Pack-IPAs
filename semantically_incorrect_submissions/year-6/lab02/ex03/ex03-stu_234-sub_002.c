

#include <stdio.h>

int main () { 
    int N, M;
    
    scanf("%d %d", &N, &M);
    if (N%M== 0) {
        printf("%s\n", "Yes");
    }
        else {
            printf("%s\n", "No");
        }
    return 0;
}
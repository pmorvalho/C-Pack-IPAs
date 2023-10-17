

#include <stdio.h>

int main()
{
    int M, N;
    scanf("%d %d", &N, &M);
    if (N % M == 0){
        printf("yes\n");
        return 0;
    }
    else{
        printf("no\n");
        return 0;
    }
}



#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    
    int i = 1;
    while (i <= N) {
        printf("%d\n",i);
        i = i++;
    }
return 0;
}
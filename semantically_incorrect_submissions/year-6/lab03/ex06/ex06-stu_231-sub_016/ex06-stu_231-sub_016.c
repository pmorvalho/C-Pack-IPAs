
#include <stdio.h>

int main(){
    int n, j = 0;
    while((n = getchar()) != '\n'){
        j += n - '0';
    }
    if(j % 9 == 0)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}
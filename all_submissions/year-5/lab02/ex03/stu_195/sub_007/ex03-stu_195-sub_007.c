

#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int r = a % b;
    if (r != 0){
        printf("no\n");
    }
    else{
        printf("yes\n");
    }
    return 0;
}


#include <stdio.h>

int main (){
    int a, b = 0;
    scanf("%d %d", &a, &b);
    if (a%b == 0){
        printf("yes\n");
    }
    else {
        printf("no\n");
    }
    return 0;
}
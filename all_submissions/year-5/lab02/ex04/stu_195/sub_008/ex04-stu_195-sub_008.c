
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b){
        if (a > c){
            if(b > c){
                printf("%d %d %d\n", c, b, a);
            }
            else{
                printf("%d %d %d\n", b, c, a);
            }
        }
        else{
            printf("%d %d %d\n", b, a, c);
        }
    }
    else{
        if (b > c){
            if(a > c){
                printf("%d %d %d\n", c, a, b);
            }
            else{
                printf("%d %d %d\n", a, c, b);
            }
        }
        else{
            printf("%d %d %d\n", a, b, c);
        }
    }

    return 0;
}

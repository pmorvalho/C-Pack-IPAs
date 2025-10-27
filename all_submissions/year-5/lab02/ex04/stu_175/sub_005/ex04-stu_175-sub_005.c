
#include <stdio.h>

int main(){
    int a, b, c, comp1, comp2 = 0;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b){
        comp1 = a;
        comp2 = b;
    }
    else {
        comp1 = b;
        comp2 = a;
    }
    if (c > comp1){
        printf("%d %d %d\n", comp2, comp1, c);
    }
    else if (c < comp2){
        printf("%d %d %d\n", c, comp2, comp1);
    }
    else {
        printf("%d %d %d\n", comp2, c, comp1);
    }
    return 0;
}
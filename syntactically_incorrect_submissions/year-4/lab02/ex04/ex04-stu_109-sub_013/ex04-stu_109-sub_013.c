
#include <stdio.h>

int main(){
    int a, b, c;

    printf("Introduza 3 numeros inteiros:\n");
    scanf("%d%d%d", &a, &b, &c);

     int temp;
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    printf("%d%d%d\n", a, b, c);
    return 0;    
}
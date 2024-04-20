#include <stdio.h>



int main () {
    int a;
    int b;
    int c;

    
    scanf("%d%d%d", &a, &b, &c);

    if (a > b) {
        if (a > c) {	  
            printf("%d\n", a);
        }
        else {
            printf( " O maior numero é %d\n", c);
        }}
    else {
        if (b > c) {
            printf("%d\n", b);
        }
        else {
            printf("%d\n", c);
        }
    }
    return 0;

}

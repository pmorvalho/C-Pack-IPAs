
#include <stdio.h>

int biggest(int a, int b, int c) {
    if (a > b) {
        if (a > c) {
            return a;
        } 
        else {
            return c;
        }
    }
        else {
            if (b > c) {
                return b;
            }
            else {
                return c;
            }
        
    }
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", biggest(a, b, c));
    return 0;
}
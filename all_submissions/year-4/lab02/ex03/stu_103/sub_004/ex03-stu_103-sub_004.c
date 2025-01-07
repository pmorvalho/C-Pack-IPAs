


#include <stdio.h>

int divisor(int a, int b) {
    if (a % b == 0) {
        printf("Yes\n");
        return 0; 
    }
    else {
        printf("No\n");
        return 1; 
    }
}

int main() {
    int a, b;
  
    printf("Numbers: ");
    scanf("%d,%d", &a,&b);
    
    divisor(a, b);

    return 0;
}
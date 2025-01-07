
#include <stdio.h>

int main() {
    int seconds;
    float test;
    float s;

    scanf("%d", &seconds);
    test = seconds / 60.0;  
    s = (test - (int)test) * 10;  
    printf("%f\n%f", test, s);

    return 0;
}

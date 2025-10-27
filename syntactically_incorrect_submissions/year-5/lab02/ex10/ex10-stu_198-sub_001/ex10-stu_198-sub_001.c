
#include <stdio.h>
int main() {
    int sum = 0, count = 0;
    char c;
    c = getchar();
    while(c != '\n'){
        
        sum += c - '0';
        
        count++;
        c = getchar();  
    }
    printf("%d\n%d\n", count, sum);
}
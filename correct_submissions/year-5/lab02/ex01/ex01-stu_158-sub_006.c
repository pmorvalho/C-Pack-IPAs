
#include <stdio.h>

int main() {
    int first, second, third;

    scanf("%d %d %d", &first, &second, &third);
    if (second > first) first = second;
    
    

    printf("%d\n", third > first ? third : first);

    return 0;
}
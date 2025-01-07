
#include <stdio.h>
#include <string.h>    
#define DIM 80

int main() {
    char str[DIM]; 
    int point1, point2, i, len;

    scanf("%s", str);

    point1 = 0;
    len = strlen(str);
    point2 = strlen(str) - 1;

    for (i = 0; i < len/2; i++) {
        if (str[point1] != str[point2]) {
            printf("no\n");
            return 0;
        }

        point1++; 
        point2--;
    
    }
        
    printf("yes\n");
    return 0;
}
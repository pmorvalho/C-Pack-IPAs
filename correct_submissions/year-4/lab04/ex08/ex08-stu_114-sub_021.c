
#include <stdio.h>
#include <string.h>

#define VECMAX 80

int main () {

    int i = 0;
    char left[VECMAX], right[VECMAX];

    scanf("%s", left);
    scanf("%s", right);
    
    while(1) {
        if(left[i] > right[i]) {
            printf("%s\n", left);
            return 0;
        }
        if(left[i] < right[i]) {
            printf("%s\n", right);
            return 0;
        }
        
        if (left[i] == right[i]) {
            i++;
        }
    }

    return 0;
}
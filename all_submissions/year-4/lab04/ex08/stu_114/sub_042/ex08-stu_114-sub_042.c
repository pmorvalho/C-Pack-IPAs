
#include <stdio.h>
#include <string.h>

int main () {

    int i = 0;
    char left[80], right[80];

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
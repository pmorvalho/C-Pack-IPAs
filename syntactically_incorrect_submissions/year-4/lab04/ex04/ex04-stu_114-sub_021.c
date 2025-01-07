
#include <string.h>
#include <stdio.h>
#include <ctype.h>

#define VECMAX 80
int main() {

    char str[VECMAX]; 
    int left, right;

    scanf("%s", str);
    left = 0, right = strlen(str) - 1;

    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }   

    while (right > left) {
        if (str[left] != str[right]) {
            printf("no\n");
            return 0;
        } 

        left++;
        right--;
    }

    printf("yes\n");
    return 0;
}

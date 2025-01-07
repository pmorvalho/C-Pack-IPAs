

#include <stdio.h>
#include <string.h>

#define MAX = 80

int main(){
    char s1[80] = "\0";
    int i, j, size;

    scanf("%s", s1);
    size = strlen(s1);

    for  (i = size - 1, j = 0; j <= i; i--, j++){
        if (s1[i] != s1[j]){
            printf("no\n");
            return 0;
        }
    }

    printf("yes\n");
    return 0;
}


#include <stdio.h>
#include <string.h>

#define MAX 80

int main(){
    char s[MAX];
    scanf("%s", s);

    int len = strlen(s);
    for (int l = 0, r = len - 1; l < r; l++, r--){
        if (s[l] != s[r]){
             printf("no\n");
             return 0;
        }
    }

    printf("yes\n");

    return 0;

}
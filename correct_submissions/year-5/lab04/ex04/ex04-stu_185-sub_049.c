
#include <stdio.h>
#include <string.h>
#define MAX 80
int main(){
    char s[MAX];
    int c ,i;
    scanf("%s", s);
    c = strlen(s);
    for (i = 0; i < c / 2; i++){
        if (s[i] != s[c - 1 - i]){
            printf("no\n");
            return 0;
        }
    }
    printf("yes\n");
    return 0;
}
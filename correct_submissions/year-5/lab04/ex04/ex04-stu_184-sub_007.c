
#include <stdio.h>
#include <string.h>

#define MAX 80

int main(){
    char s[MAX];
    int n,i;

    scanf("%s", s);
    n = strlen(s);

    for (i =0; i<n;i++){
        if (s[i] != s[n-i-1]){
            printf("no\n");
            return 0;
        }
    }
    printf("yes\n");
    return 0;
}
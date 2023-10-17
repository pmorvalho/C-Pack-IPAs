

#include <stdio.h>

#define MAX 100

int main (){
    char s[MAX];
    int i, m;

    scanf("%s", s);
    for (i = 0; i < MAX; i++){
        if (s[i] == '\0')
            m = i-1;
    }
    for (i = 0; i < (m / 2); i++){
        if (s[i] != s[m-i]){
            printf("no\n");
            return 0;
        }
    }
    printf("yes\n");
    return 0;
}
#include <stdio.h>
#include <string.h>

#define MAX 80

int main(){

    char s[MAX];
    int c, len, p, state = 1;

    scanf("%s",s);
    len = strlen(s);
    c = len-1;
    for(p=0; p < len; p++){
        if(s[p] != s[c])
            state = 0;
        c -= 1;
    }
    if (state == 1)
        printf("yes\n");
    else
        printf("no\n");


    return 0; 
}
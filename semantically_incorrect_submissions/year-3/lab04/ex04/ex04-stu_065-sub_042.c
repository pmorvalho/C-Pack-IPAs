
#include <stdio.h>
#include <string.h>

#define MAX 80

int palindromo(char s[]){
    int i, j;
    for (i = 0, j = strlen(s)-1 ; i < j; i++, j--){
        if (s[i] != s[j])
            return 0;
    }
    return 1;
}           

int main(){
    char s[MAX];

    scanf("%s", s);
    if(palindromo(s))
        printf("yes\n");
    else
        printf("no\n");

    return 0;
}   

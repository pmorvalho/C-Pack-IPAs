
#include <stdio.h>
#include <string.h>
#define MAXSTRING 80

void palindromo(s[]){
    if(strlen(s)>MAXSTRING){
        return;
    }
    for (int i = 0, int j = strlen(s) - 1; i < j; i++, j--) {
        if (s[i] != s[j]) {
            printf("%s", "no");
            return; 
        }
    }
    printf("%s", "yes");
    return;
}
int main(){
    char s;
    scanf("%s", s);
    palindromo(s[]);
    return 0;
}
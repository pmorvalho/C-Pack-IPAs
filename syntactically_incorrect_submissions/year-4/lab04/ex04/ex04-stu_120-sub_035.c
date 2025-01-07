
#include <stdio.h>
#include <string.h>
#define MAXSTRING 80

void palindromo(s){
    int j;
    if(strlen(s)>MAXSTRING){
        return;
    }
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        if (word[i] != word[j]) {
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
    palindromo(s);
    return 0;
}
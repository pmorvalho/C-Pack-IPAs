
#include <stdio.h>
#include <string.h>
#define MAX 80

void apagaCaracter(char s[], char c){
    int i, j, lenS = strlen(s);
    char s2[lenS];
    for(j = 0, i = 0; i < lenS; i++, j++){
        if(s[i] != c){
            s2[j] = s[i];
        }else{
            j--;
        }
    }
    s2[j] = '\0';
    printf("%s", s2);
}


int main(){
    char s[MAX], c;
    fgets(s, MAX, stdin);
    c = getchar();
    apagaCaracter(s,c);
}

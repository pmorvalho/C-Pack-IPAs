

#include <stdio.h>

#define MAX 80

int leLinha(char s[]){
    int len=0;
    fgets(s, MAX, stdin);
    while (s[len]!=EOF && s[len]!='\0'){
        len++;
    }
    return len;
}

int main(){
    
    char s[MAX];
    
    leLinha(s);
    printf("%s",s);
    
    return 0;
    }
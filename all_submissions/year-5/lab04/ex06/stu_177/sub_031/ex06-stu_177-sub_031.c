
#include <stdio.h>

void maiusculas(char s[]){
    int c, i = 0;
    while((c = getchar()) != '\n' && c != EOF){
        if(c>='a' && c<='z')
            s[i] = c - 32;
        else
            s[i] = c;
        i++;
        
    }
    s[i] = '\0';
    printf("%s\n", s);
}

int main(){
    char s[100];
    maiusculas(s);
    return 0;
}


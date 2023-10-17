
#include <stdio.h> 
#define MAX 100
void maiusculas(char s[]){
    int i, c;
    for (i = 0; i < MAX && (c=getchar())!='\n' && c != EOF; i++){
        if ('a' <= c && c <= 'z')
            s[i] = c - 32;
        else    
            s[i] = c;
    }
}

int main(){
    char s[MAX];
    maiusculas(s);
    printf("%s\n", s);
    return 0;
}
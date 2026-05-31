
#include <stdio.h>

void maiusculas(char s[]){
    int c, i = 0;
    while((c = getchar()) != '\n' && c != EOF){
        if(c >= 'a' && c <= 'z'){
            c = c - ('a' - 'A');
        }
        s[i++] = c;
    }
    s[i] = '\0';
    
}
int main(){
    char s[80] = "";
    maiusculas(s);
    printf("%s\n", s);
    return 0;
}

#include <stdio.h>
#define MAX 80

void maiusculas(char s[]){
    char c;
    int i = 0;
    while ((c = getchar()) != '\n' && c != EOF ){
        if (i < MAX - 1) { 
            if (c >= 'a' && c <= 'z'){
               s[i] = c - ('a' - 'A');
            } else {
               s[i] = c;
            }
            i++;
        }
    }
  s[i] = '\0';
}

int main(){
    char s[MAX];
    maiusculas(s);
    printf("%s\n", s);
    return 0;
}
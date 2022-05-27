#include <stdio.h>

#define MAX 80

void apagacaracter( char s[], char c);

int main(){
    char c, s[MAX];

    fgets(s, MAX, stdin); 
    scanf("%c", &c);      

    apagacaracter(s, c);

    printf("%s", s);

    return 0;
}

void apagacaracter(char s[], char c){
    int read = 0, write = 0;
    char c2;
    
    while((c2 = s[read++]) != '\0')
        if(c2 != c)
            s[write++] = c2;
    
    s[write] = '\0';
}
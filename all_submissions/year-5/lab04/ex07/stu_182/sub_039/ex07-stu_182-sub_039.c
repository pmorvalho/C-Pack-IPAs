
#include <stdio.h>
#include <string.h>

#define MAX 80

int leLinha(char s[]){
    int c, i = 0;

    while((c = getchar()) != EOF && c != '\n'){
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}

int main(){
    char s[MAX], c;
    int i = 0;
    leLinha(s);
    
    scanf("%c", &c);

    while(s[i] != '\0'){
        if(s[i] != c){
            putchar(s[i]);
        }
        i++;
    }
    putchar('\n');
    
    return 0;
}

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
    char s[MAX];
    leLinha(s);
    printf("%s\n", s);
    return 0;
}
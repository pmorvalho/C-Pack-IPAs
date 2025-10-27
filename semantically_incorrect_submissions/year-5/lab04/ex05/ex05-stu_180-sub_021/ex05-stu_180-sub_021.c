

#include <stdio.h>
#include <string.h>
#define MAX 80

int leLinha(char s[]){
    int DIM=strlen(s);
    int c, i;
    c = getchar();
    for (i = 0; i < DIM-1 && c != EOF && c != '\n'; i++) {
        s[i] = c;
        c = getchar();
    }

    s[i] = '\0';
    printf("%s\n", s);
    
    return 0;        
}

int main(){
    char s[MAX];
    leLinha(s);
    return 0;
}

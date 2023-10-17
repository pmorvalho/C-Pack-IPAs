

#include <stdio.h>

#define MAX 80

int leLinha(char s[]);

int main(){
    int i=0;
    char c, s[MAX];
    c=getchar();
    while((c!='\n') && (c!=EOF)){
        putchar(c);
        s[i] = c;
        c=getchar();
        i++;
    }
    printf("\n");
    s[i] = '\0';
    
    return 0;
}

int leLinha(char s[]){
    int i, carateres=0;

    for(i=0; s[i] != '\0'; i++)
        carateres++;
    
    return carateres;
}
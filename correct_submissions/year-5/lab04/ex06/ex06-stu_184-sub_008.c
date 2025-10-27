
#include <stdio.h>

#define MAX 80

int leLinha(char s[]){

    int n=0,c;

    while((c= getchar())!= EOF && c!='\n'){
        s[n++]=c;
    }
    s[n]= '\0';
    return n;
}

void maiusculas(char s[]){

    while(*s != '\0'){
        if (*s >= 'a' && *s <= 'z'){
            *s +='A'-'a';
        }
        s++;
    }
}
int main(){
    char s[MAX];
    leLinha(s);
    maiusculas(s);
    printf("%s\n", s);

    return 0;
}
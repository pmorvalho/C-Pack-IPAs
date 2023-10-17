
#include<stdio.h>
#include <ctype.h>
void maiusculas(char s[]){
    int i=0,c,j;
    while ((c = getchar()) != EOF && c !='\n'){
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    for (j = 0; j < i;j++){
        s[j] = toupper(s[j]);
        printf("%c",s[j]);}
    putchar('\n');
}

int main(){
    char s[100];
    maiusculas(s);
    return 0;
}
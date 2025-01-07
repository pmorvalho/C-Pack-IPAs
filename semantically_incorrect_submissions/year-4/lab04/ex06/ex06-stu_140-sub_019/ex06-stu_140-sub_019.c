
#include <stdio.h>
#include <string.h>
int leLinha(char s[]){
    char current;
    int counter=0;
    current=getchar();
    while(current!=EOF && current!='\n'){
        s[counter]=current;
        counter++;
        current=getchar();
    }
    s[counter]='\0';
    return counter;
}

void maiusculas(char s[]){
    char current;
    int counter=0;
    current=s[counter];
    while (current!='\0'){
        if(current<'z'&& current>'a'){
            current=current-'a'+'A';
            s[counter]=current;
        }
        counter++;
    }
}

int main(){
    char s[200];
    leLinha(s);
    maiusculas(s);
    printf(s);
    return 0;
}
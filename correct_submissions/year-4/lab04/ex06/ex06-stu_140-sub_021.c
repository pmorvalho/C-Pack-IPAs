
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
    int counter=0;
    while (s[counter]!='\0'){
        if(s[counter]<='z'&& s[counter]>='a'){
            
            s[counter]-=('a'-'A');
        }
        counter++;
    }
}

int main(){
    char s[100];
    leLinha(s);
    maiusculas(s);
    printf("%s\n",s);
    return 0;
}
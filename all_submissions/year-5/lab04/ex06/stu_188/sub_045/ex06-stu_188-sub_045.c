
#include <stdio.h>

int leLinha(char s[]){
    
    int i=0; 
    char c;
    while ((c=getchar())!='\n' && c!=EOF){
        s[i]=c;
        i++;
    }
    s[i]='\0';
    return i; 
}

void maiusculas(char s[]){
    int i=0;

    while(s[i]!='\0'){
        if (s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-32;
        }
        i++;
    }
}

int main(){
    char s[80];
    leLinha(s);
    maiusculas(s);
    printf("%s\n",s);
    return 0;
}
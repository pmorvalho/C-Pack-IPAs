
#include <stdio.h>

void apagaCaracter(char s[], char c){
    int i=0, j=0;
    while (s[i]!='\0'){
        if (s[i]!=c){
            s[j]=s[i];
            j++;
        }
        i++;
    }
    s[j]='\0'; 
   
}

int main(){
    char s[80],c;
    scanf("%c",&c);
    apagaCaracter(s,c);
    printf("%s\n",s);
    return 0;
}
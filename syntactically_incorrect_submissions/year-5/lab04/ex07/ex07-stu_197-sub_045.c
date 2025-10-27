
#include <stdio.h>
#define MAX 80

void apagaCaracter(char s[], char c){
    for(int i=0; s[i]!='\0';i++){
        if(s[i]!=c){
            putchar(s[i]);
        }
    }
    printf("\n");
}
int main(){
    int i=0;
    char s[MAX], c;
    while((c=getchar())!='\n'){
        s[i]=c;
        i+=1;
    }
    s[i+1]='\0';
    scanf("%c",&c);
    apagaCaracter(s,c);

    return 0;
}
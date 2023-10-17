
#include <stdio.h>
#define MAX 100

int lelinha(char s[]){
    int i, c;
    for (i=0; i<MAX && (c=getchar())!='\n' && c != EOF; i++){
        s[i] = c;
    }
    s[i]='\0';
    return i;
} 

void apagaCaracter(char s[], char c){
    int i, j=0;
    for (i = 0; s[i] != '\0'; i++){
        if(s[i] != c)
            s[i-j] = s[i];
        else
            j++;
    }
    s[i] = '\0';
}


int main(){
    char c, s[MAX];
    lelinha(s);
    c = getchar();
    apagaCaracter(s, c);
    printf("%s\n", s);
    return 0;
}
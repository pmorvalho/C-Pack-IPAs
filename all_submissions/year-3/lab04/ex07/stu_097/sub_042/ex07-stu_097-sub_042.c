

#include <stdio.h>
#define MAX 80

int lelinha (char s[]){
    int c, i;
    c=getchar();
    for (i=0; i < MAX-1 && c != '\n' && c != EOF; i++){
        s[i] = c;
        c = getchar();
    }
    s[i] = '\0';
    return i;
}


void apagaCaracter (char s[], char c){
    int i=0, coloca=0;           

    for (i=0; s[i] != '\0'; i++){     
        if (s[i] != c){
            s[coloca] = s[i];
            coloca++;
        }
    }
    s[coloca]='\0';
}


int main(){
    char c, s[MAX];

    lelinha(s);
    scanf("%c", &c);
    apagaCaracter(s,c);

    printf("%s\n", s);

    return 0;
}
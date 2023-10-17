

#include <stdio.h>
#include <string.h>

#define MAX 80

void apagaCaracter(char s[], char c);

int main(){
    char s[MAX], c;
    fgets(s, MAX, stdin);
    s[strlen(s) - 1] = '\0';
    scanf("%c", &c);
    apagaCaracter(s, c);
    return 0;
}

void apagaCaracter(char s[], char c){
    char nova[MAX];
    int i=0, j=0;
    
    while(s[i] != '\0'){
        if(s[i] !=c){
            nova[j] = s[i];
            j++;
        }
        i++;
    }

    s[i] = '\0';

    for(i=0; nova[i] != '\0'; i++)
        printf("%c", nova[i]);
    
    printf("\n");
}
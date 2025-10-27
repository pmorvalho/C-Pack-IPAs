
#include <stdio.h>

void apagaCaracter(char s[], char c){
    int i = 0, j = 0;
    char s2[100];

    while(s[i] != '\0'){
        if(s[i] != c){
            s2[j] = s[i];
            j++;
        }
        i++;
    }
    printf("%s", s2);
}

int main(){
    char s[100], c;
    
    fgets(s, sizeof(s), stdin);

    scanf("%c", &c);

    apagaCaracter(s, c);
    return 0;
}
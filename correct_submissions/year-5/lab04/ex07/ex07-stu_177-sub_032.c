
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
    s2[j] = '\0';
    printf("%s\n", s2);
}

int main(){
    char s[100], c;
    int car, k = 0;
    
    while((car = getchar()) != '\n')
        s[k++] = car;
    s[k] = '\0';

    scanf("%c", &c);

    apagaCaracter(s, c);
    return 0;
}
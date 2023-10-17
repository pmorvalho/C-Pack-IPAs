
#include <stdio.h>
#define MAX 80

int leLinha(char s[]){

    int c, i=0;

    c = getchar();

    while ((c != EOF) && (c != '\n'))
    {
        s[i] = c;
        i++;
        c = getchar();
    }
    
    s[i] = '\0';

    return i;

}

void updateChars(char s[], int remIndex){

    int i = remIndex;
    while (s[i] != '\0')
    {
        s[i] = s[i+1];
        i++;
    }
    
}

void apagaCaracter(char s[], char c){

    int i=0;

    while (s[i] != '\0')
    {

        if (s[i] == c){
            updateChars(s, i);
        }else{
            i++;
        }
    }

    printf("%s\n", s);

    return;

}

int main(){
    char s[MAX], c;
    leLinha(s);
    scanf("%c", &c);
    apagaCaracter(s, c);
    return 0;
}

#include <stdio.h>

#define DIM 100

int leLinha(char s[]){
    int i;
    char c;
    
    c = getchar();
    for(i = 0; i < DIM-1  && c != EOF && c != '\n'; i++){
        s[i] = c;
        c = getchar();
    }
    s[i] = '\0';
    return i;
}

void apagaCaracter(char s[], char c){
    int i, j;
    for(i = 0; s[i] != '\0'; i++){
        if( s[i] == c){
            j = i;
            while(s[j] != '\0'){
                s[j] = s[j+1];
                j++;
            }
            apagaCaracter(s, c);
        }        
                
    }
}

int main()
{   
    char s[DIM];
    char c;
    
    leLinha(s);
    c = getchar();
    apagaCaracter(s, c);

    printf("%s\n", s);
    return 0;
}
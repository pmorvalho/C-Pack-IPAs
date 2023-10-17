
#include <stdio.h>
#include <string.h>
#define MAX 50

void maior_numero(char s1[MAX], char s2[MAX]){
    int i;

    if(s1[0] == '-' && s2[0] != '-')
        printf("%s\n", s2);

    else if(s1[0] != '-' && s2[0] == '-')
        printf("%s\n", s1);

    else if(s1[0] == '-' && s2[0] == '-'){
        if(strlen(s1) < strlen(s2))
            printf("%s\n", s1);
        
        else if(strlen(s1) > strlen(s2))
            printf("%s\n", s2);

        else{
            for(i = 0; s1[i] != '\0'; i++){
                if(s1[i] > s2[i]){
                    printf("%s\n", s2);
                    break;
                }
                if(s1[i] < s2[i]){
                    printf("%s\n", s1);
                    break;
                }
            }
        }
    }
    
    else{
        if(strlen(s1) < strlen(s2))
            printf("%s\n", s2);
        
        else if(strlen(s1) > strlen(s2))
            printf("%s\n", s1);

        else{
            for(i = 0; s1[i] != '\0'; i++){
                if(s1[i] > s2[i]){
                    printf("%s\n", s1);
                    break;
                }
                if(s1[i] < s2[i]){
                    printf("%s\n", s2);
                    break;
                }
            }
        }
    }
}

void leLinha(char s[]){
    int c, contador = 0;

    while((c = getchar()) != ' ' && c != '\n'){
        s[contador++] = c;
    }
    s[contador] = '\0';
}

int main(){
    char str1[MAX], str2[MAX];

    leLinha(str1);
    leLinha(str2);
    maior_numero(str1, str2);

    return 0;
}
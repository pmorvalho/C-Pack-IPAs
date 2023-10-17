
#include <stdio.h>
#include <string.h>
#define MAX 50

char maior_numero(char s1[MAX], char s2[MAX]){
    int i;

    if(s1[0] == '-' && s2[0] != '-')
        return s2;

    else if(s1[0] != '-' && s2[0] == '-')
        return s1;

    else if(s1[0] == '-' && s2[0] == '-'){
        if(strlen(s1) < strlen(s2))
            return s1;
        
        else if(strlen(s1) > strlen(s2))
            return s2;

        else{
            for(i = 0; s1[i] != '\0'; i++){
                if(s1[i] > s2[i])
                    return s2;
                if(s1[i] < s2[i])
                    return s1;
            }
        }
    }
    
    else{
        if(strlen(s1) < strlen(s2))
            return s2;
        
        else if(strlen(s1) > strlen(s2))
            return s1;

        else{
            for(i = 0; s1[i] != '\0'; i++){
                if(s1[i] > s2[i])
                    return s1;
                if(s1[i] < s2[i])
                    return s2;
            }
        }
    }
    return s1;
}

void leLinha(char s[]){
    int c, contador = 0;

    while((c = getchar()) != EOF && c != '\n'){
        s[contador++] = c;
    }
    s[contador] = '\0';
}

int main(){
    char str1[MAX], str2[MAX], maior;

    leLinha(str1);
    leLinha(str2);
    printf("%s\n", maior_numero(str1, str2));

    return 0;
}
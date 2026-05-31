
#include <stdio.h>

int leLinha(char s[]){
    int i = 0;
    while(s[i] != '\n' && s[i] != '\0'){
        i++;
    }
    return i;
}

int main(){
    int i = 0;
    char s[100], c;
    while((c = getchar()) != '\n' && c != EOF){
        s[i++] = c;
    }   
    s[i] = '\0';
    printf("%s\n", s);
    return 0;
}
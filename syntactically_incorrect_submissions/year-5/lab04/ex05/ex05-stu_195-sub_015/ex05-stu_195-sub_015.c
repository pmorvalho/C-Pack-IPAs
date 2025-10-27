
#include <stdio.h>

int leLinha(char s[]){
    char c;
    int i = 0;
    while ((c = getchar()) != '\n'){
        s[i] = c;
        i++;
    }
    return 0;
}

int main(){
    char s[100];
    lelinha(s);
    printf("%s", s);
    
    return 0;
}
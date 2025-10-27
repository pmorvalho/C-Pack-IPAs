
#include <stdio.h>

int main(){
    int c, i = 0;
    char str[100];
    while((c = getchar()) != '\n' && c != EOF){
        str[i++] = c;
    }
    str[i] = '\0';
    printf("%s\n", str);
    return 0;
}

int leLinha(char s[]){
    int i = 0;
    while(s[i] != '\n' && s[i] != '\0')
        i++;
    
    return i;
}
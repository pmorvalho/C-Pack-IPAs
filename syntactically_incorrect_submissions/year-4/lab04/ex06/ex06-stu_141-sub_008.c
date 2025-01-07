
#include <stdio.h>

#define MAX 80

int leLinha(char s[]){
    int c, size = 0;

    while((c = getchar()) != EOF && c != '\n' && size < MAX - 1){
        s[size++] = c;
    }
    s[size] = '\0';

    return size;
}

void maiusculas(char s[]){
    for (int i = 0; s[i] != '\0'; i++){
        if (s[i] >= 'a' && s[i] <= 'z'){
            s[i] = s[i] - 'a' + 'A';
        }
    }
}


int main(){
    char s[MAX];
    
    leLinha(s);
    maiusculas(s);
    
    printf("%s\n", s);    
    return 0;
}
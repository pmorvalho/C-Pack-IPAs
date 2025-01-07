

#include <stdio.h>
#include <string.h>

#define MAX 80

int leLinha(char []);

int main(){
    char s[MAX];
    int tamanho;

    tamanho = leLinha(s);
    s[tamanho] = '\0';

    printf("%s\n", s);

    return 0;
}


int leLinha(char s[]){
    int count = 0;
    char c;

    for (count = 0; (c = getchar()) != '\n' && c != EOF; count++){
        s[count] = c;
    }
    
    return count;
}
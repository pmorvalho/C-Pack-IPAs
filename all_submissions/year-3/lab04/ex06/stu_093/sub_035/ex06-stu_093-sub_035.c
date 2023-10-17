
#include <stdio.h>
#define DIM 80

int leLinha(char s[]);
void maiusculas(char s[], int dim);

int leLinha(char s[]){

    int i;
    char c;

    for(i = 0; (c = getchar()) != '\n' && c != EOF; i++)
        s[i] = c;
    
    s[i] = '\0';

    return i;
}

void maiusculas(char s[], int dim){
    
    int i;

    for(i = 0; i < dim; i++)
        if(s[i] >= 97 && s[i] <= 122)
            s[i] -= 32;
}

int main(){

    char s[DIM];
    int dim;

    dim = leLinha(s);
    maiusculas(s, dim);

    printf("%s\n", s);

    return 0;
}
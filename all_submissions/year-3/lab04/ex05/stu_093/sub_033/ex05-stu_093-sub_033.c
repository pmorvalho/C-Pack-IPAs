
#include <stdio.h>
#define DIM 80

int leLinha(char s[]);

int leLinha(char s[]){

    int i;
    char c;

    for(i = 0; (c = getchar()) != '\n' && c != EOF; i++)
        s[i] = c;
    
    s[i] = '\0';

    return i;
}

int main(){

    char s[DIM];

    leLinha(s);
    printf("%s\n", s);

    return 0;
}
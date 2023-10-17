
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

void maiusculas(char s[]){
    int i;
    for(i = 0; s[i] != '\0'; i++){
        if( s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 'a' - 'A';
    }
    
}

int main()
{   
    char s[DIM];
    
    leLinha(s);
    maiusculas(s);

    printf("%s\n", s);
    return 0;
}

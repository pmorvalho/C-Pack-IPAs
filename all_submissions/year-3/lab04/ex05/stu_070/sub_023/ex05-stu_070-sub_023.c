
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

int main()
{   
    char s[DIM];
    
    leLinha(s);
    printf("%s\n", s);
    return 0;
}


#include <stdio.h>
#define MAX_C 100

int leLinha(char s[]){
    int c, ind;
    for (ind = 0;ind < MAX_C -1 && ((c = getchar()) != EOF && c != '\n'); ind++)
        s[ind] = c;
    s[ind] = '\0';
    return ind;
}

void maiusculas(char s[]){
    int index;
    for (index = 0; s[index] != '\0'; index++){
        if (s[index] <= 'a')
            s[index] -= ('a' - 'A');
    }
}

int main(){
    char s[MAX_C];
    leLinha(s);
    maiusculas(s);
    printf("%s",s);
    return 0;
}
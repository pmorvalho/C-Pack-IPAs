
#include <stdio.h>
#define MAX 80

int main(){

    char string[MAX];
    void maiusculas();
    int leLinha();

    leLinha(string);
    maiusculas(string);
    printf("%s\n", string);

    return 0;
}

int leLinha( char s[]){

    int c, i = 0;
    c = getchar();
    while (c != '\n' && c != EOF && i < MAX-1){
        s[i++] = c;
        c = getchar();
    }
    s[i] = '\0';
    return i;

}

void maiusculas(char s[]){
    int i = 0;    
    while (s[i] != '\0'){    

        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= ('a' - 'A');

        i++;
    }
}


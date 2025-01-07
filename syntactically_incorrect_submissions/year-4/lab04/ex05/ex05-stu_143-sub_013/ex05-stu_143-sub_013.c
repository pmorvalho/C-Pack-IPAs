

#include <stdio.h>
#define MAX 80

int main(){

    char string[MAX];
    int leLinha(), c;
    
    leLinha(string);
    
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

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




int main(){
    char s[MAX];
    
    leLinha(s);
    printf("%s\n", s);
    return 0;
}
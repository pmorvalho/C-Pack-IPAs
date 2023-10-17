
#include <stdio.h>

#define MAX 80

int leLinha(char s[]){
    int i, c;
    for(i = 0; i < MAX && ((c = getchar())!= '\n' && c != EOF); i++)
        s[i] = c;
    s[i] = '\0';
    return i;
}

void maisculas(char s[]){
    int i;
    for (i = 0; s[i] != '\0'; i++){
        if (s[i] >= 'a' && s[i]<= 'z')
            s[i] -= 'A';
    }
}

int main(){
    char s[MAX];
    leLinha(s);
    miasculas(s);
    printf("%s\n", s);
    return 0;
}
#include <stdio.h>

#define MAX 80

int leLinha(char s[MAX]){
    int i = 0;
    while(s[i] != '\0')
        i++;
    return i;
}


int main(){
    int c, i;
    char s[MAX];

    for(i = 0; i < MAX - 1 && (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;
    s[i] = '\0';
    printf("%s\n", s);
    printf("%d\n", leLinha(s));
    return 0;
}
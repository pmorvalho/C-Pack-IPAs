
#include <stdio.h>
#include <string.h>
#define MAX_C 100

int leLinha(char s[]){
    int c, ind;
    c = getchar();
    for (ind = 0;ind < MAX_C && (c != EOF && c != '\n'); ind++)
        s[ind] = c;
    s[ind] = '\0';
    return ind;
}

int main(){
    char s[MAX_C];
    leLinha(s);
    printf("%s\n",s);
    return 0;
}

#include <stdio.h>

int main(){
    char c;
    int i,alg,max = 0;
    c = getchar;
    for (i = 0;c != EOF && c != '\n';i++){
        alg = c - '0';
        max = alg > max ? alg : max;
    }
    printf("%d",max);
    return 0;
}

#include <stdio.h>
#include <string.h>
#define VECMAX 100

int leLinha(char s[]){
    int n_c, i;
    char c;
    for (i = 0; (c = getchar()) != '\n' && c != EOF ; i++){
        s[i] = c;
    }
    n_c = strlen(s);
    for (i = 0; i < n_c; i++){
        printf("%c", s[i]);
    }
    printf("\n");
    return n_c;
}

int main(){
    char s_1[VECMAX];
    leLinha(s_1);
    return 0;
}


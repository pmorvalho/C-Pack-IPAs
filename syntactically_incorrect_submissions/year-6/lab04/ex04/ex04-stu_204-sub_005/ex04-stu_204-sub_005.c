

#include <stdio.h>
#include <string.h>
#define DIM 100

int main(){

    char s[DIM];
    char s1[DIM];
    scanf("%s", s);
    int comprimento = strlen(s), num = 0;

    while(s[num] != '\0'){
        --comprimento;
        s1[num] = s[comprimento];
        num++;
    }

    s1[num] = '\0';

    if (strcmp(s, s1) == 0){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
}
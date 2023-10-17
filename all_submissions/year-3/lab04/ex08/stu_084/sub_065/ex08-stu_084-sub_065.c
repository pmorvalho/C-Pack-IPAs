
#include <stdio.h>
#define MAX 100

int leLinha(char s[]){
    int i, c;
    for(i = 0; i < MAX && (c = getchar()) != EOF && c != '\n'; i++){
        s[i] = c;
    }
    s[i] = '\0';
    return i;
}

int main(){
    char s1[MAX], s2[MAX];
    int i;

    leLinha(s1);
    leLinha(s2);
    for(i = 0; s1[i] == s2[i] && s1[i] != '\0'; i++);
    if (s1[i] > s2[i]){
        printf("%s\n", s1);
    }
    else{
        printf("%s\n", s2);
    }
    return 0;
}
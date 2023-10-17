
#include <stdio.h>
#define MAX 100


int leLinha(char s[]){
    int i, c;
    for (i = 0; i < MAX && (c = getchar()) != EOF && c != '\n'; i++){
        s[i] = c;
    }
    s[i] = '\0';
    return i;
}

char *maior(char s[], char c[]){
    int i;
    for (i = 0; s[i] == c[i] && s[i] != '\0'; i++);
    if (s[i] > c[i]){
        return s;
    }
    else{
        return c;
    }
}




int main(){
    char n1[MAX], n2[MAX];
    leLinha(n1);
    leLinha(n2);
    printf("%s\n", maior(n1,n2));
    return 0;

}
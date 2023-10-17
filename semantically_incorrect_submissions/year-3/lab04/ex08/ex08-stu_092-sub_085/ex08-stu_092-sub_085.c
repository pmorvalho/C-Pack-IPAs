
#include <stdio.h>

#define MAX 80

int leLinha(char s[]){
    int i, c;
    for(i = 0; i < MAX && ((c = getchar())!= '\n' && c != EOF); i++)
        s[i] = c;
    s[i] = '\0';
    return i;
}

char *maior(char n1[], char n2[]){
    int i;
    for (i = 0; n1[i] == n2[i] && n1[i] != '\0'; i++);
    if (n1[i] > n2[i])
        return n1;
    else 
        return n2;
}

int main() {
    char n1[MAX], n2[MAX];
    leLinha(n1);
    leLinha(n2);
    printf("%s\n", maior(n1,n2));
    return 0;
}
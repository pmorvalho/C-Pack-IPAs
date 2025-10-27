
#include <stdio.h>
#include <string.h>

#define MAX 100

int leLinha(char s[]){
    int c, i = 0;

    while((c = getchar()) != EOF && c != '\n' && c != ' '){
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}

char *maior(char n1[], char n2[]){
    int i;
    
    for(i = 0; n1[i] == n2[i] && n1[i] != '\0'; i++){
        if (n1[i] > n2[i]){
            return n1;
        }
       
    }
    return n2;
}

int main(){
    char n1[MAX], n2[MAX];
    leLinha(n1);
    leLinha(n2);
    printf("%s\n", maior(n1,n2));
    return 0;
}
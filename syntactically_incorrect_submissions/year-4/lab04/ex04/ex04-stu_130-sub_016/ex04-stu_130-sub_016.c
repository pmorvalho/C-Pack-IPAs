
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MAX 80

int main(){
    char s[MAX];
    int indice = 0, checker = true;

    scanf("%s", s);

    
    for (int i = 0; s[i] != '\0'; i++){
        indice = i;
    }
    for (int i = 0; i < indice; i++){
        checker =  checker && ((s[i] == s[indice - i]) ? true : false);
        
    }
    printf("%s\n", checker ? "yes" : "no");
}
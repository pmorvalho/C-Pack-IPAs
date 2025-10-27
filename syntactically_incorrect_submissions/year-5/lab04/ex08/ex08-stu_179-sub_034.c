

#include <stdio.h>
#include <string.h>

#define TAM 100

int main() {

    char n1[TAM];
    char n2[TAM];

    scanf("%s %s", n1, n2);
    int tam1 = strlen(n1);
    int tam2 = strlen(n2);

    if (tam1 == tam2){
        if (strcmp(n1, n2) > 0){
            printf("%s\n", n1);
        }
        else printf("%s\n", n2);
    }
    else{
        if (tam1 > tam2) printf("%s\n", n1);
        else printf("%s\n", n2);
    }

    return 0;
}

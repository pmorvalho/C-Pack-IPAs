
#include <stdio.h>
#include <string.h>
int main() {
    char n1[101], n2[101];
    int i, tam;
    scanf("%s %s", n1, n2);
    tam=strlen(n1);
    for (i=0; i<tam; i++){
        if(n1[i]>n2[i]){
            printf("%s\n", n1);
            return 0;
        }
        else if(n1[i]<n2[i]){
            printf("%s\n", n2);
            return 0;
        }
    }
    printf("%s\n", n1);
    return 0;
}
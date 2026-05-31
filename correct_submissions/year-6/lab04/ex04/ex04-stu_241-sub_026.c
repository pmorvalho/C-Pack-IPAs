
#include <stdio.h>
#include <string.h>
#define MAX 80
#define YES 1
#define NO 0

int main(){
    char palavra[MAX];
    int tamanho,i,estado=YES;
    scanf("%s",palavra);
    tamanho = strlen(palavra);
    for (i=0; i<tamanho/2; i++)
        if (palavra[i]!=palavra[tamanho-i-1]){
            estado=NO;
            break;
        }
    if(estado==YES)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}
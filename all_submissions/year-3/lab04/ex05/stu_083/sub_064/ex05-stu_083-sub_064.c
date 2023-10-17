
#include <stdio.h>
#define DIM 100

int main(){
    char linha[DIM];
    char c;
    int i=0;
    c=getchar();
    while((c!=EOF && c!='\n')){
        linha[i]=c;
        i++;
        c=getchar();
    }
    linha[i]='\n';
    linha[++i]='\0';
    printf("%s",linha);
    return 0;
}
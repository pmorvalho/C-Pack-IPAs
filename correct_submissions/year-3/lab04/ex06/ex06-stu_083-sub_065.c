
#include <stdio.h>
#define DIM 100

int main(){
    char linha[DIM];
    char c;
    int i=0;
    c=getchar();
    while((c!=EOF && c!='\n')){
        if (c>='a' && c<='z')
        {
            linha[i]=c-'a'+'A';
        }
        else {
            linha[i]=c;
        }
        i++;
        c=getchar();
    }
    linha[i]='\n';
    linha[++i]='\0';
    printf("%s",linha);
    return 0;
}

#include <stdio.h>
#define DIM 100

int leLinha(char s[]){
    int c,i;
    for(i=0;i<DIM-1 && (c=getchar())!= EOF && c!='\n';i++)
        s[i]=c;
    s[i]='\0';
    return i;
}

int main(){
    char linha[DIM];
    leLinha(linha);
    printf("%s\n",linha);
    return 0;
}

#include <stdio.h>
#define DIM 100

int leLinha(char s[]){
    int c,i;
    for(i=0;i<DIM-1 && (c=getchar())!= EOF && c!='\n';i++)
        s[i]=c;
    s[i]='\0';
    return i;
}

void maiusculas(char s[]){
    int i;
    for(i=0;i<DIM-1;i++){
        if(s[i]>='a'&& s[i]<= 'z')
            s[i]= s[i] - 32;
    }
}

int main(){
    char linha[DIM];
    leLinha(linha);
    maiusculas(linha);
    printf("%s\n",linha);
    return 0;
}
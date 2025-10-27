
#include <stdio.h>
#define DIM 100

int leLinha(char s[]){
    printf("%s\n",s);
}

int main(){
    char s[DIM];
    int i =0, c;

    c=getchar();
    while (c!=EOF && c!='\n' &&i<DIM-1){
        s[i++]=c;
        c=getchar();
    }
    s[i]='\0';

    leLinha(s);

    
    return 0;
}
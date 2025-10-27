
#include <stdio.h>
#define DIM 100

int main(){
    char s[DIM];
    int i =0, c;

    c=getchar();
    while (c!=EOF && c!='\n' &&i<DIM-1){
        s[i++]=c;
        c=getchar();
    }
    s[i]='\0';

    printf("%s\n",s);
    return 0;
}

#include <stdio.h>

#define MAX 80

int leLinha(char s[]){

    int n=0,c;

    while((c= getchar())!= EOF && c!='\n'){
        s[n++]=c;
    }
    s[n]= '\0';
    return n;
}

int main(){
    char s[MAX];
    int c, n,i;
    n = leLinha(s);
    c = getchar();
    for (i=0;i<n;i++){
        if (s[i]!=c)putchar(s[i]);
    }
    printf("\n");

    return 0;
}
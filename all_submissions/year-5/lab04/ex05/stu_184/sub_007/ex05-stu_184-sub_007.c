
#include <stdio.h>
#include <string.h>

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
    leLinha(s);
    printf("%s\n", s);

    return 0;
}
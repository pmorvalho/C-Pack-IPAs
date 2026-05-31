
#include <stdio.h>
#define MAX 80

int leLinha(char str[]){
    int c,i=0;
    while((c=getchar())!=('\n'||EOF))
        str[i++]=c;
    str[i]='\0';
    return i;
}

int main(){
    char str[MAX];
    leLinha(str);
    printf("%s\n",str);
    return 0;
}
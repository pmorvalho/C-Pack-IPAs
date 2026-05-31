
#include <stdio.h>
#define MAX 80

void apagaChar(char str[],char c);

int main(){
    char c;
    char str[MAX];
    leLinha(str);
    c=getchar();
    apagaChar(str,c);
    printf("%s\n",str);


}

void apagaChar(char str[],char c){
    int current,i=0;
    while(str[i]){
        if(str[i]!=c)
            str[current++]=str[i];
        i++;
    }
    str[current]='\0';
    return str;
}

#include <stdio.h>
#include <string.h>

int main(){
    int i,soma=0;
    char N[20];
    scanf("%s",N);
    for(i=0;i<strlen(N);i++)
        soma+= N[i]-'0';
    if(soma%9==0)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}
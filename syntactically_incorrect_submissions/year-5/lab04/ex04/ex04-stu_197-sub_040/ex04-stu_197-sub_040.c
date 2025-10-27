
#include <stdio.h>
#include <string.h>

#define MAX 80

int main(){
    int i;
    char string[MAX],dup[MAX];
    scanf("%s",string);
    int len = strlen(string);

    for(i=0;i<len;i++){
        dup[i]=string[len-1-i];
    }
    dup[len]='\0';
    if(strcmp(string,dup)==0){
        printf("yes\n");
    }else{
        printf("no\n");
    }

    return 0;
}
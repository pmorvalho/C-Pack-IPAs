
#include <stdio.h>
#include <string.h>
#define MAX 80
int main(){
    char str[MAX];
    int i,len;
    scanf("%s",str);
    len = strlen(str);

    for(i=0;i<len/2;i++){
        if (str[i] != str[(len-i-1)])
            return printf("no") == EOF;
    }
return printf("yes")==EOF;
}
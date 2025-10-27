
#include <stdio.h>
#include <string.h>
#define MAX 100

int main(){
    char a[MAX],b[MAX];
    scanf("%s%s",a,b);
    if (strlen(a) == strlen(b)){
        printf("%s\n",(strcmp(a,b)>0)? a:b);
    }
    else if (strlen(a) > strlen(b)){
        printf("%s\n",a);
    }else{
        printf("%s\n",b);
    }
    return 0;
}
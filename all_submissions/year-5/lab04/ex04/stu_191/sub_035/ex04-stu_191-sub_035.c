
#include <stdio.h>
#define MAX 80

int main(){
    int i, tamanho=-1, j, p=0;
    char s[MAX];
    scanf("%s", s);

    for (i=0;s[i]!='\0';++i){
        ++tamanho;
    }

    j=tamanho;
    for (i=0; i!=j && i<j && p==0;++i){
        if(s[i]!=s[j]){
            p=1;
        }
        --j;
    }

    if(p==0){
        printf("yes\n");
    } else{
        printf("no\n");
    }

    return 0;
}


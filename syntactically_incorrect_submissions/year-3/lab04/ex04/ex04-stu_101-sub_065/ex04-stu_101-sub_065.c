

#define MAX 80
#include <stdio.h>

int main(){
    char s[MAX];
    int i=0,contac,inicio=1,fim;
    scanf("%s",s);
    for(i=0;i!=EOF;i++){
        contac++;
    }
    for(inicio=1,fim=contac;inicio<=contac,1<=fim;inicio++,fim--){
        if(s[inicio]!=s[fim]){
            printf("no");
            return 0;
        }
    }
    printf("yes");
    return 0;

}

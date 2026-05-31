
#include <stdio.h>
#include <string.h>
#define MAX 80

int main() {
    char num1[MAX], num2[MAX];
    int c, i=0, tamanho1, tamanho2;
    c=getchar();
    while(c!=' '){
        num1[i]=c;
        i++;
        c=getchar();
    }
    num1[i]='\0';
    i=0;
    c=getchar();
    while(c!='\n' && c!=EOF){
        num2[i]=c;
        i++;
        c=getchar();
    }
    num2[i]='\0';
    tamanho1=strlen(num1);
    tamanho2=strlen(num2);
    if (tamanho1<tamanho2) {
        printf("%s\n", num2);
        return 0;
    }
    else if (tamanho1>tamanho2) {
        printf("%s\n", num1);
        return 0;
    }
    else {
        for(i=0; i<tamanho1;i++){
            if(num1[i]<num2[i]) {
                printf("%s\n", num2);
                return 0;
            }
            else if(num1[i]>num2[i]) {
                printf("%s\n", num1);
                return 0;
            }
        }
    }
    printf("%s\n", num1);
    return 0;
}
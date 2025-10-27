
#include <stdio.h>

#define VECMAX 100
int main(){
    int cont = 1;
    char a, num1[VECMAX],num2[VECMAX];
    scanf("%c",&a);
    num1[0] = a;
    while(a != ' '){
        scanf("%c",&a);
        num1[cont] = a;
    }
    cont = 1;
    scanf("%c",&a);
    while(a != '\n'){
        scanf("%c",&a);
        num2[cont] = a;
    }
    cont = 0;
    while (1){
        if (num1[cont] != num2[cont])
            break;
        cont++;
        if (num1[cont] == '\0')
            break;
    }
    if (num1[cont]>num2[cont])
        printf("%s",num1);
    else
        printf("%s",num2);
}
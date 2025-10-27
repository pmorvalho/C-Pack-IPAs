
#include <stdio.h>

#define VECMAX 100
int main(){
    int cont = 0;
    char a, num1[VECMAX],num2[VECMAX];
    scanf("%c",&a);
    while(a != ' '){
        num1[cont] = a;
        scanf("%c",&a);
        cont++;
    }
    cont = 0;
    scanf("%c",&a);
    while(a != '\n'){
        scanf("%c",&a);
        num2[cont] = a;
        cont++;
    }
    cont = 0;
    while (1){
        if (num1[cont] != num2[cont])
            break;
        if (num1[cont] == '\0')
            break;
        cont++;
        
    }
    if (num1[cont]>num2[cont])
        printf("%s\n",num1);
    else
        printf("%s\n",num2);
}
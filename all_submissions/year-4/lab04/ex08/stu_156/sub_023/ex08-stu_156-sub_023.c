
#include <stdio.h>
#include <string.h>
#define VECMAX 100

int main(void){
    char num1[VECMAX],num2[VECMAX];
    int i,j,k, n1,n2;
    scanf("%99[0-9]%99[0-9]",num1,num2);
    n1 = strlen(num1);
    n2 = strlen(num2);
    for(i = 0; num1[i]=='0';i++){
        n1--;
    }
    for(j = 0; num2[j]=='0';i++){
        n2--;
    }
    if(n1 != n2){
        printf("%s\n", n1>n2? num1 : num2);
        return 0;
    }

    for(k= 0; num1[i+k];k++){
        if(num1[i+k] != num2[j+i]){
            printf("%s\n", num1[i+k] > num1[j+k] ? num1 : num2);
        }
    }
    return 0;
}
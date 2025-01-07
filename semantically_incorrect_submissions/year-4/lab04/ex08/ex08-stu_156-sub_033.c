
#include <stdio.h>
#include <string.h>
#define VECMAX 100

int main(void){
    char num1[VECMAX],num2[VECMAX];
    int i,j,k,n1,n2;
    char c;
    for(i = 0;i < VECMAX -1 && (num1[i] = getchar()) != ' ';i++){
    
    }
    n1 = i;
    for(j = 0;j < VECMAX -1 && (c = getchar()) != ' ' && c != '\n';j++){
        num2[j]=c;
    }
    n2 = j;
    
    for(i = 0; num1[i]=='0';i++){
        n1--;
    }
    for(j = 0; num2[j]=='0';j++){
        n2--;
    }

    if(n1 != n2){
        if(n1 > n2){
            printf("%s\n",num1);
        }
        else{
            printf("%s\n",num2);
        }
        return 0;
    }

    for(k= 0; num1[i+k];k++){
        if(num1[i+k] != num2[j+i]){
            if(num1[i+k] > num2[j+k]){
                printf("%s\n", num1);
            }
            else{
                printf("%s\n",num2);
            }
            
        }
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
#define vecMAx 100

int main(){
    char num1[vecMAx], num2[vecMAx];
    int n1, n2, i;
    scanf("%99[0-9] %99[0-9]", num1, num2);
    n1 = strlen(num1);
    n2 = strlen(num2);

    if (n1 != n2){
        printf("%s\n", n1 > n2 ? num1:num2);
        return 0;
    }

    for (i = 0; i < n1; i++){
        if(num1[i] != num2[i]){
            num1[i] > num2[i]? puts(num1): puts (num2);
            return 0;
        }
    }





    
}

#include <stdio.h>
#include <string.h>

#define MAX 100

int main()
{
    int i, c, maior;
    char num1[MAX], num2[MAX];
    for(i = 0; (c = getchar()) != ' '; i++)
        num1[i] = c;
    for(i = 0; (c = getchar()) != '\n'; i++)
        num2[i] = c;
    maior = 1;
    for(i = 0; i < (int) strlen(num1); i++){
        if(num1[i] > num2[i]){
            break;
        }
        else if(num2[i] > num1[i]){
            maior = 0;
            break;
        }
    }
    if(maior) 
        printf("%s\n", num1);
    else
        printf("%s\n", num2);
    return 0;
}
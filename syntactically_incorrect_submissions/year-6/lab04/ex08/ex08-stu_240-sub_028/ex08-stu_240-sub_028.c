
#include <stdio.h>
#include <string.h>
#define MAX 80
#define NAO 0
#define SIM 1


int main(){ 
    char num1[MAX], num2[MAX], c;
    int primeiro_num = SIM, i = 0;
    
    while ((c = getchar()) != EOF && c != '\n'){
        if (c == ' '){
            num1[i] = '\0';
            i = 0;
            primeiro_num = NAO;
            continue;
        }
        else if (primeiro_num == SIM){
            num1[i] = c;
        }
        else if (primeiro_num == NAO){
            num2[i] = c;
        }
        i++;
    }
    num2[i] = '\0';
    
    if (strcmp(num1,num2) >= 0){
        printf("%s\n", num1);
    }
    else{
        printf("%s\n", num2);
    }
}
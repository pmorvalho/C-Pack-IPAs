
#include <stdio.h>
#include <string.h>
#define MAX 100
int leLinha(char s[]){
    int c, ind;
    for (ind = 0;ind < MAX - 1 && (c = getchar()) != EOF && c != '\n'; ind++)
        s[ind] = c;
    s[ind] = '\0';
    return ind;
}

int main(){
    char num1[MAX], num2[MAX],maior[MAX];
    int i;
    leLinha(num1);
    leLinha(num2);
    for (i = 0; num1[i] != '\0' && num2[i] != '\0';i++){
        if (num1[i] > num2[i]){
            strcpy(maior,num1);
            break;
        } 
        else if (num1[i] < num2[i]){
            strcpy(maior,num2);
            break;
        }
    }
    printf("%s\n",maior);
    return 0;
}
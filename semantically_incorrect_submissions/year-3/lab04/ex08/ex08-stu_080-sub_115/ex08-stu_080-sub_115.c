
#include <stdio.h>
#define MAX 100
int leLinha(char s[]){
    int c, ind;
    for (ind = 0;ind < MAX - 1 && (c = getchar()) != EOF && c != '\n'; ind++)
        s[ind] = c;
    s[ind] = '\0';
    return ind;
}

int main(){
    char num1[MAX], num2[MAX];
    int i;
    leLinha(num1);
    leLinha(num2);
    for (i = 0; num1[i] != '\0';i++);
    if (num1 > num2)
        printf("%s\n", num1);
    else
        printf("%s\n", num2);
    return 0;
}
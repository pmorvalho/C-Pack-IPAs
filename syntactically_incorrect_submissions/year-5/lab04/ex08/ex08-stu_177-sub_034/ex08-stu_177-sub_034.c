
#include <stdio.h>

int main(){
    int c;
    char num1[100], num2[100];
    int i = 0, j = 0; 

    while((c = getchar()) != ' ')
        num1[i++] = c;
    while((c = getchar()) != EOF && c != '\n')
        num2[j++] = c;

    int a1 = 0, a2 = 0;
    int k = 0;

    while(a1 == a2){
        a1 = num1[k];
        a2 = num2[k];
        k++;
    }

    if(a1 > a2)
        printf("%s\n", num1);
    else    
        printf("%s\n", num2);

    return 0;
}
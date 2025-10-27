
#include <stdio.h>
#define MAX 100
#define OFF 0
#define NUM1 1
#define NUM2 2

int main(){
    char num1[MAX], num2[MAX];
    int i = 0, theevilflag = OFF;
    scanf("%s", num1);
    scanf("%s", num2);
    while(num1[i] != '\0' && num2[i] != '\0' && theevilflag == OFF){
        if (num1[i] > num2[i]){
            theevilflag = NUM1;
        }
        if (num1[i] < num2[i]){
            theevilflag = NUM2;
        }
        i++;
    }
    if (theevilflag == NUM1){
        printf("%s\n", num1);
    }
    else if (theevilflag == NUM2){
        printf("%s\n", num2);
    }
    return 0;
}
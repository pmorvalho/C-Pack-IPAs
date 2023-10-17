
#include <stdio.h>




#define MAX 100

int main() {
char num1[MAX], num2[MAX];
scanf("%s %s", num1, num2);
int i;
for (i = 0; num1[i] != '\0' && num2[i] != '\0'; i++){
    if (num1[i] > num2[i]){
        printf("%s\n", num1);
        return 0;
    }
    else{
        printf("%s\n", num2);
        return 0;
    }

}
return 0;



}
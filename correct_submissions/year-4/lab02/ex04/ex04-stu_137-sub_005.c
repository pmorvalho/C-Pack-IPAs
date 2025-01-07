
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
    int num1, num2, num3, smaller, middle, bigger;
    scanf("%d %d %d", &num1, &num2, &num3);
    
    bigger = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    smaller = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);

    middle = (num1 != bigger && num1 != smaller) ? num1 : ((num2 != bigger && num2 != smaller) ? num2 : num3);

    printf("%d %d %d\n",smaller,middle,bigger); 
    return 0;
}
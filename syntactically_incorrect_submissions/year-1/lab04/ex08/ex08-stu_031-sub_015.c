#include <stdio.h>
#include <string.h>
#define DIM 100


int main() {
	int i,maior;
	char num1[DIM],num2[DIM];
    scanf("%s", num1);
    scanf("%s", num2);
    for (i = 0;num1[i]!= '\0';i++) {
    	if (num1[i] > num2[i]){
    		maior = num1;
    	    break;}

        if (num2[i] > num1[i]){
    		maior = num2;
    	    break;}}
    if (maior == num1)

    printf("%s\n", num1);
    else printf("%s\n", num2);
    return 0;}
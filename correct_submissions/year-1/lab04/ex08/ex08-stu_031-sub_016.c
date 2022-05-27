#include <stdio.h>
#include <string.h>
#define DIM 100
#define UM 1
#define DOIS 0
int main() {
	int i,maior;
	char num1[DIM],num2[DIM];
    scanf("%s", num1);
    scanf("%s", num2);
    for (i = 0;num1[i]!= '\0';i++) {
    	if (num1[i] > num2[i]){
    		maior = UM;
    	    break;}

        if (num2[i] > num1[i]){
    		maior = DOIS;
    	    break;}}
    if (maior == UM)

    printf("%s\n", num1);
    else printf("%s\n", num2);
    return 0;}
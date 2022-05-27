#include <stdio.h>

#define MAX 80

int main(){

	int i;
	char num1[MAX], num2[MAX];

	scanf("%s%s", num1, num2);

	for(i = 0; num1[i] == num2[i] || num1[i] == '\0'; i++);

	if (num1[i] == '\0' || num1[i] > num2[i])
		printf("%s\n", num1);

	if (num1[i] < num2[i])
                printf("%s\n", num2);

	return 0;
}

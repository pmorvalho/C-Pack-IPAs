#include <stdio.h>
#include <string.h>

#define MAX 80



int main() {
	char palavra[MAX];
	int len, j;

	scanf("%s", palavra);
	len = strlen(palavra);
	for (j = 0; j < (len+1)/2; j++)
		if (palavra[j] != palavra[len - j - 1])
			break;
	j == (len+1)/2 ? printf("yes\n") : printf("no\n");

	return 0;
}

#include <stdio.h>

#define MAX 100



int main() {
	char num_1[MAX], num_2[MAX];
	int i;

	scanf("%s%s", num_1, num_2);
	for (i = 0; i < MAX; i++) {
		if (num_1[i] > num_2[i]) {
			printf("%s\n", num_1);
			break;
		}
		else if (num_1[i] < num_2[i]) {
			printf("%s\n", num_2);
			break;
		}
	}

	return 0;
}

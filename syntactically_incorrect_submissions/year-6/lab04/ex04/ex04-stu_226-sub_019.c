
#include <stdio.h>
#include <string.h>

int main() {
	char str[100];

	scanf("%s", str);

	int len = strlen(str);
	int half = len / 2;

	for (int i = 0; i < half; i++) {
		if (str[i] != str[len - 1 - i]) {
			printf("no\n");
			return 0;
		}
	}
	printf("yes\n");
	return 0;
}
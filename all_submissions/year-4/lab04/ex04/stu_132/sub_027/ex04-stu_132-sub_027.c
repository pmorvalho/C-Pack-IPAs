#include <stdio.h>
#include <string.h>
#define MAX 80

int main() {
	char s[MAX];
	int len, i, is_palindrome;
	scanf("%s", s);
	len = strlen(s) - 1;
	if (len == -1) {
		printf("yes\n");
		return 0;
	}
	for (i = 0; i < len / 2; i++) {
		if (s[i] != s[len - i]) {
			is_palindrome = 0;
		} else {
			is_palindrome = 1;
		}
	}
	printf("%s\n", is_palindrome ? "yes" : "no");
	return 0;
}

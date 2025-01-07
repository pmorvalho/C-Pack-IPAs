#include <stdio.h>
#define MAX 80

int main() {
	char s[MAX];
	int len, i, is_palindrome;
	scanf("%s", s);
	for (len = 0; len < MAX; len++) {
		if (s[len] != '\0') {
			len++;
		} else {
			break;
		}
	}
	for (i = 0; i < len/2; i++) {
		if (s[i] < s[len - i]) {
			is_palindrome = 1;
		} else {
			is_palindrome = 0;
		}
	}
	printf("%s", is_palindrome ? "yes" : "no");
	return 0;
}

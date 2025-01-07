#include <stdio.h>
#include <string.h>
#define MAXSTRING 80

int leLinha(char s[]) {
	int i = 0;
	char c;
	while ((c = getchar()) != '\n' && c != EOF) {
		s[i++] = c;
	}
	s[i] = '\0';
	return i;
}

int main() {
	char s[MAXSTRING];
	leLinha(s);
	printf("%s\n", s);
	return 0;
}

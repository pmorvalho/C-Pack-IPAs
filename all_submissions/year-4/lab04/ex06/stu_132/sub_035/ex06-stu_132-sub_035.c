#include <stdio.h>
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

void maiusculas(char s[]) {
	int i, len;
	len = leLinha(s);
	for (i = 0; i < len; i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			s[i] -= 'a' - 'A';
		}
	}
}

int main() {
	char s[MAXSTRING];
	maiusculas(s);
	printf("%s\n", s);
	return 0;
}

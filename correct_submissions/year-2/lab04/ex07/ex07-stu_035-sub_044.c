#include <stdio.h>

#define MAX 80



int leLinha(char s[]) {
	int chars = 0;

	while ((s[chars] = getchar()) != '\n')
		chars++;
	s[chars] = '\0';

	return chars;
}

void apagaCaracter(char s[], char c) {
	int len = leLinha(s), j, i;
	c = getchar();

	for (i = len - 1; i >= 0; i--)
		if (s[i] == c)
			for (j = i; s[j] != '\0'; j++)
				s[j] = s[j + 1];
}

int main() {
	char s[MAX], c = 'a';
	apagaCaracter(s, c);
	printf("%s\n", s);

	return 0;
}

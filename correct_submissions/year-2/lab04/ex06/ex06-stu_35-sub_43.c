#include <stdio.h>

#define MAX 80



int leLinha(char s[]) {
	int chars = 0;

	while ((s[chars] = getchar()) != '\n' && s[chars] != EOF)
		chars++;
	s[chars] = '\0';

	return chars;
}

void maiusculas(char s[]) {
	int i = 0;
	int len = leLinha(s);

	while (i < len) {
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= ('a' - 'A');
		i++;
	}
}

int main() {
	char s[MAX];
	maiusculas(s);
	printf("%s\n", s);

	return 0;
}

#include <stdio.h>

#define MAX 80



int leLinha(char s[]) {
	int chars = 0;

	while ((s[chars] = getchar()) != '\n' && s[chars] != EOF)
		chars++;
	s[chars] = '\0';

	return chars;
}

int main() {
	char s[MAX];
	leLinha(s);
	printf("%s\n", s);

	return 0;
}

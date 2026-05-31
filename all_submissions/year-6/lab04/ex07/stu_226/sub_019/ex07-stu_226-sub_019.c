

#include <stdio.h>
#include <string.h>

void apagaCaracter(char s[], char c) {
	for(int i = 0; s[i] != '\0'; i++) {
		if (s[i] == c) {
			for (int j = i; s[j] != '\0'; j++) {
				s[j] = s[j + 1];
			}
			i--;
		}
	}
}

int leLinha(char s[])
{
	int i = 0;
	char c;
	char letter;
	while ((c = getchar()) != '\n' && c != EOF) {
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	scanf("%c", &letter);
	apagaCaracter(s, letter);
	return i;
}

int main() {
	char s[100];
	int n = leLinha(s);
	printf("%s\n", s);
	return 0;
}
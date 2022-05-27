#include <stdio.h>

#define MAX 80

int lelinha(char s[]);
void apagaCaracter(char s[], char c);

int main()
{
	char linha[MAX], c;

	lelinha(linha);

	scanf("%c", &c);

	apagaCaracter(linha, c);

	printf("%s\n", linha);
		
	return 0;
}

int lelinha(char s[])
{
	int c, i;
	for (i = 0; i < MAX - 1 && (c = getchar()) != '\n' && c != EOF; ++i)
		s[i] = c;

	s[i] = '\0';

	return i;
}

void apagaCaracter(char s[], char c)
{
	int i, j, deslocamento;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] == c)
		{
			
			
			deslocamento = 0;
			for (j = i; s[j] == c; ++j)
				++deslocamento;
			
			for (j = i; s[j] != '\0'; ++j)
				s[j] = s[j + deslocamento];

			s[j] = '\0';

		}
	}
}
#include <stdio.h>
#define MAX 80

void apagaCaracter(char s[],char c);

int main()
{
	char c, s[MAX];
	fgets(s, MAX, stdin);
	scanf("%c", &c);

	apagaCaracter(s,c);

	return 0;
}

void apagaCaracter(char s[], char c)
{
	int i = 0;

	while (s[i] != '\0'){
		if (s[i] == c){
			s[i] = ' ';}
		i++;}

	printf("%s", s);
}

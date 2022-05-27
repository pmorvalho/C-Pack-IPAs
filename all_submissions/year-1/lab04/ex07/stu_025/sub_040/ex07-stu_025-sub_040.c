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
	int i, j = 0;
	char s_out[MAX];

	for(i = 0; s[i] != '\0'; i++){
		if (s[i] != c){
			s_out[j] = s[i];
			j++;}
		}

	printf("%s", s_out);
}

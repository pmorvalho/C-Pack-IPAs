#include <stdio.h>
#define MAX 80

int leLinha(char s[]);

void maiusculas(char s[]);

int main()
{
	char s[MAX];
	int i, dim;

	dim = leLinha(s);
	maiusculas(s);

	for(i = 0; i < dim; i++){
		putchar(s[i]);}

	putchar('\n');

	return 0;
}

int leLinha(char s[])
{
	char c;
	int i = 0;

	while((c = getchar()) != EOF && c != '\n' && i < MAX - 1){
		s[i++] = c;}

	s[i] = '\0';

	return i;
}

void maiusculas(char s[])
{
	char c;
	int i = 0;

	while((c = s[i++]) != '\0'){
		if (c >= 'a' && c <= 'z'){
			s[i-1] = c - 'a' + 'A';}}
}



#include <stdio.h>
#include <stdbool.h>


#define MAXLINE 10000




int getLineWords(char s[], int lim)
{
	int c, i = 0;
	bool readingWord = false;

	while (i < lim-1 && (c = getchar()) != EOF)
	{
		
		if (c == '"' && !readingWord) 
		{
			if (i > 0 && s[i-1] == '\\') 
				continue;

			readingWord = true;
		} 
		
		else if (c == '"' && readingWord) 
		{
			if (i > 0 && s[i-1] == '\\') 
			{
				s[i-1] = '"';
			}
			else 
			{
				readingWord = false;
				s[i] = '\n';
				++i;
			}
		}
		
		else if (readingWord) {
			if (i > 0 && c == '\\' && s[i-1] == '\\') 
				continue;

			s[i] = c;
			++i;
		}
	}


	s[i] = '\0';

	return i;
}


int main() 
{
	char s[MAXLINE];

	getLineWords(s, MAXLINE);

	printf("%s", s);

	return 0;
} 

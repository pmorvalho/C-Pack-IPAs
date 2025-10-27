

#include <stdio.h>
#include <stdbool.h>

#define MAXLINE 100000



bool isWhitespace(char c) 
{
	return c == ' ' || c == '\n';
}



int getFilteredLine(char s[], int lim)
{
	int c, i = 0;
	bool readingNumber = false;

	while (i < lim-1 && (c = getchar()) != EOF)
	{
		
		if (c == '0' && !readingNumber) {

			
			
			if ((i > 0 && isWhitespace(s[i-1])) || i == 0) {
				s[i] = '0';
				++i;
			}

			continue;
		}
		
		
		if (!isWhitespace(c) && c != '0')
		{
			readingNumber = true;

			
			
			if (
				(i > 1 && s[i-1] == '0' && (isWhitespace(s[i-2])))
				|| (i == 1 && s[i-1] == '0')
			) {
				s[i-1] = c;
				continue;
			}
		}
		else if (isWhitespace(c))
			readingNumber = false;

		s[i] = c; 
		++i;
	}


	s[i] = '\0';

	return i;
}


int main() 
{
	char s[MAXLINE];

	getFilteredLine(s, MAXLINE);

	printf("%s", s);

	return 0;
} 

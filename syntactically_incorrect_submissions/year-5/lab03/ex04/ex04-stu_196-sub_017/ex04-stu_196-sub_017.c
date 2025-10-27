

#include <stdio.h>
#include <stdbool.h>

#define MAXLINE 1000



int getFilteredLine(char s[], int lim)
{
	int c, i = 0;
	bool readingNumber = false;

	while (i < lim-1 && (c = getchar()) != EOF && c != '\n')
	{
		if (c == '0' && !readingNumber) {
			if (s[i-1] == ' ') {
				s[i] = '0';
				++i;
			}

			continue;
		}
		
		if (c != ' ' && c != '0')
			readingNumber = true;

			if (s[i-1] == '0') {
				--i;
				s[i] = c;
				continue;
			}
		else if (c == ' ')
			readingNumber = false;

		s[i] = c; 
		++i;
	}


	if (c == '\n') {
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



#include <stdio.h>
#include <stdbool.h>


#define MAXLINE 10000




int get_line_words(char s[], int lim)
{
	int c, i = 0;
	bool readingWord = false;
	bool backslash = false;

	while (i < lim-1 && (c = getchar()) != EOF)
	{
		
		if (c == '"' && !readingWord) 
		{
			if (i > 0 && backslash) 
			{
				backslash = false;
				continue;
			}

			readingWord = true;
		} 
		
		else if (c == '"' && readingWord) 
		{
			if (backslash) 
			{
				s[i-1] = '"';
				backslash = false;
			}
			else
			{
				readingWord = false;
				s[i] = '\n';
				++i;
			}
		}
		
		else if (readingWord) 
		{
			if (c == '\\' && backslash) 
			{
				backslash = false;
			} 
			else 
			{
				backslash = c == '\\';
				s[i] = c;
				++i;
			}
		}
	}

	s[i] = '\0';

	return i;
}


int main() 
{
	char s[MAXLINE];

	get_line_words(s, MAXLINE);

	printf("%s", s);

	return 0;
} 

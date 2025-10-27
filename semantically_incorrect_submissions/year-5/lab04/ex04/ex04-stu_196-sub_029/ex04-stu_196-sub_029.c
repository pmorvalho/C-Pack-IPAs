

#include <stdio.h>
#include <stdbool.h>

#define MAX 80

bool is_palindrome(char s[])
{
	int length;
	int i = 0;

	while (i < MAX && s[i] != '\0')
	{
		length = ++i;
	}

	for (i=0; i<length/2; i++)
	{
		if (s[i] != s[length-i-1]) return false;
	}

	return true;
}

int main() 
{
	char s[MAX];

	scanf("%s", s);

	printf("%s\n", is_palindrome(s) ? "yes" : "no");

	return 0;
}

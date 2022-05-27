#include <stdio.h>
#include <string.h>

#define MAX 80

int main()
{
	int stat = 0, dim, i;
	char s[MAX];

	scanf("%s", s);

	dim = strlen(s);

	for(i = 0; i < dim/2; i++){
		if (s[i] != s[dim-i-1]){
			stat = 1;
			break;}}

	printf(stat == 0 ? "yes\n" : "no\n");

	return 0;
}

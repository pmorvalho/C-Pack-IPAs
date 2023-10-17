#include <stdio.h>
#define MAX 80

int main()
{
	int stat = 0, dim = 1, i;
	char s[MAX];

	scanf("%s", s);

	for(i = 0; s[i] == '\0'; i++){
		dim++;}

	for(i = 0; i < dim; i++){
		if (s[i] != s[dim-i-1]){
			stat = 1;}}

	printf("%s\n", stat == 0 ? "yes" : "no");

	return 0;
}

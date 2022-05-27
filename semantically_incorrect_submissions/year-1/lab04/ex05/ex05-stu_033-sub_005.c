#include <stdio.h>

#define MAX 80

int leLinha(char s[]){

	int i = 0;
	char c;

	while((c = getchar()) != '\n' && c != EOF){

		s[i] = c;

		i++;
	}

	s[i] = '\0';

	return i;
}

int main(){

	char s[MAX];

	printf("%d\n%s\n", leLinha(s), s);

	return 0;
}

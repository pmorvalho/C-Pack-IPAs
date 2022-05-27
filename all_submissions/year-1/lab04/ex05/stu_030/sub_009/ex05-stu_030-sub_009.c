#include <stdio.h>

#define MAX 80

void leLinha(char s[]){
	int i, c;

	for (i = 0; i < MAX-1 && (c = getchar()) != EOF && c != '\n'; i++){
		s[i] = c;
	}
	s[i] = '\0';

	printf("%s\n", s);
}

int main(){
	char s[MAX];
	leLinha(s);
	return 0;
}

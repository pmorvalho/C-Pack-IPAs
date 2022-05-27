#include <stdio.h>

#define MAX 80
#define DIF 32

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

void maiusculas(char s[]){

	int i;

	for(i = 0; s[i] != '\0'; i++){

		if(s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - DIF;
	}
}

int main(){

	char s[MAX];

	leLinha(s);
	maiusculas(s);

	printf("%s\n", s);

	return 0;
}

#include <stdio.h>

#define MAX 80

void apagaCaracter(char s[], char c){

	int i, j = 0;

	for(i = 0; s[i] != '\0'; i++){

		if(s[i] != c){

			s[j] = s[i];

			j++;
		}
	}

	s[j] = '\0';
}

int main(){

	char c, s[MAX];

	fgets(s, MAX, stdin);
	scanf("%c", &c);

	apagaCaracter(s, c);

	printf("%s", s);

	return 0;
}

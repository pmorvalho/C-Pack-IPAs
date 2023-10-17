#include <stdio.h>

#define MAX 80

int leLinha(char s[]){
	int i, c, cont = 0;

	for (i = 0; i < MAX-1 && (c = getchar()) != EOF && c != '\n'; i++){
		s[i] = c;
		cont++;
	}
	s[i] = '\0';

	return cont;
}

void apagaCaracter(char s[], char c){
	int i, i2 = 0;
	for(i = 0; s[i] != '\0'; i++){
		if(s[i] != c){
			s[i2] = s[i];
			i2++;
		}
	}
	s[i2] = '\0';
}

int main(){
	char c, s[MAX];
	scanf("%c\n", &c);
	leLinha(s);
	apagaCaracter(s, c);
	printf("%s\n", s);
	return 0;
}

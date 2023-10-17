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

void maiusculas(char s[]){
	int i;

	for(i = 0; s[i] != '\0'; i++){
		if(s[i] >= 'a' && s[i] <= 'z'){
			s[i] = (s[i] - 'a') + 'A';
		}
	}
}

int main(){
	char s[MAX];
	int cont = leLinha(s);
	maiusculas(s);
	printf("%s\nNumero de caracteres: %d\n", s, cont);
	return 0;
}

#include <stdio.h>

#define MAX 100

int leLinha(char s[]){
	int i, c, cont = 0;

	for (i = 0; i < MAX-1 && (c = getchar()) != EOF && c != '\n'; i++){
		s[i] = c;
		cont++;
	}

	return cont;
}

char* maior(char s[], char s2[]){
	int i, len_s, len_s2;
	len_s = leLinha(s);
	len_s2 =leLinha(s2);

	if (len_s > len_s2)
		return s;
	else if (len_s < len_s2)
		return s2;
	else{
		for(i = 0; i < len_s; i++){
		        if (s[i] > s2[i])
				return s;
			else if (s[i] < s2[i])
				return s2;
		}
		return s;
	}
}

int main(){
	char s[MAX], s2[MAX];
	printf("%s\n", maior(s, s2));
	return 0;
}

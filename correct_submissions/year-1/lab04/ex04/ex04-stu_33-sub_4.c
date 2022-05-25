#include <stdio.h>
#include <string.h>

#define MAX 80

int main(){

	int len, i;

	char s1[MAX], s2[MAX];

	scanf("%s", s1);

	len = strlen(s1);

	for(i = 0; i < len; i++)
		s2[len - i - 1] = s1[i];

	s2[len] = '\0';

	if(strcmp(s1, s2) == 0){
		printf("yes\n");

	} else {
		printf("no\n");
	}

	return 0;
}

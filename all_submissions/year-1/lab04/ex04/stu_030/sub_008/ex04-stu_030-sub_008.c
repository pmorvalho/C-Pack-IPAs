#include <stdio.h>

#define MAX 80
#define True 1
#define False 0

void palindromo(){
	char s[MAX];
	int i, l = 0;
	int value = True;
	scanf("%s", s);

	for(i = 0; s[i] != '\0'; i++){
		l = i;
	}

	for(i = 0; i <= l/2; i++){
		if(s[i] != s[l-i]){
			value = False;
			break;
		}
	}
	if(value == True)
		printf("yes\n");
	else
		printf("no\n");

}

int main(){
	palindromo();
	return 0;
}

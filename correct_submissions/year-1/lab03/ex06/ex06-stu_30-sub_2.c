#include <stdio.h>

void divisivel(){
	int c = getchar();
	int num = 0;
	while (c != EOF){
		num += c - '0';
		c = getchar();
	}
	if (num % 9 == 0)
		printf("yes\n");
	else
		printf("no\n");
}


int main(){
	divisivel();
	return 0;
}

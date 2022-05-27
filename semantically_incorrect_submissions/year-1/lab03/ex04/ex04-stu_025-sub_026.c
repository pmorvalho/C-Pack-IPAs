#include <stdio.h>

int main()
{
	char c;
	int ctr = 0;
	while ((c = getchar()) != EOF){
		if (c == ' ' || c == '\n'){
			if (ctr == 0){
				putchar('0');}
			ctr = 0;}
		else if (ctr == 0){
			if (c == '0'){
				continue;
				ctr = 1;}
		putchar(c);}
	if (ctr == 0){
		putchar('0');}}
	return 0;
}

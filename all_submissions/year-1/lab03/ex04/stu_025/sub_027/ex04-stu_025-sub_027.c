#include <stdio.h>

int main()
{
	char c;
	int ctrl = 0, num = 0;
	while ((c = getchar()) != EOF){
		if (num == 0 && '0' <= c && c <= '9'){
			num = 1;}
		if (num == 1 && ctrl == 0 && '1' <= c && c <= '9'){
			ctrl = 1;}
		if (num == 1 && c == ' '){
			if (ctrl == 0){
				putchar('0');}
			putchar(' ');
			ctrl = 0;
			num = 0;}
		if (ctrl == 1){
			putchar(c);}}
	return 0;
}

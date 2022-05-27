#include <stdio.h>

int main()
{
	int c, bar = 0, write = 0;
	while ((c = getchar()) != EOF){
		if (c == '"' && write == 1 && bar == 0){
			write = 0;
			putchar('\n');
			continue;}
		if (c == '"' && write == 0){
			write = 1;
			continue;}
		if (c == '\\' && bar == 0){
			bar = 1;
			continue;}
		if (write == 1){
			if (bar == 1){
				bar = 0;}
			putchar(c);}}
	return 0;
}

#include <stdio.h>

int main()
{
	int total, c;
	while((c = getchar()) != EOF){
		if (c >= '0' && c <= '9'){
			total += c - '0';}}
	printf("%s\n", total % 9 == 0 ? "yes" : "no" );
	return 0;
}

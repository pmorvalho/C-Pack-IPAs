#include <stdio.h>
int main()
{
	int n;
	int d = 0, s = 0;
	scanf("%d\n", &n);
	while (n > 0){
		s += n % 10;
		n = n / 10;
		d += 1;}
	printf("%d\n%d\n", d,s);
	return 0;
}

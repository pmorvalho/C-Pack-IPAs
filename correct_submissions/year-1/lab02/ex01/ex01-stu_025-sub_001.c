#include <stdio.h>

int main ()
{
	int n;
	int i = 0, m = 0;
	while (i < 3){
		scanf("%d", &n);
		if (n > m){
			m = n;}
		i += 1;}
	printf("%d\n",m);
	return 0;
}

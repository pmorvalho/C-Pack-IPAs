#include <stdio.h>
int main ()
{
	int n, m;
	scanf("%d", &n);
	scanf("%d", &m);
	if (n % m == 0){
		printf("%s\n", "yes");}
	else {
		printf("%s\n","no");}
	return 0;
}

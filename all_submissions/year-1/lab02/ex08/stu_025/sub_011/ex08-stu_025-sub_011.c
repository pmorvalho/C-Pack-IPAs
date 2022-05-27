#include <stdio.h>
int main()
{
	int n;
	int i = 0;
	float a;
	float media = 0;
	scanf("%d\n", &n);
	while (i < n){
		scanf("%f\n", &a);
		media += a;
		i += 1;}
	media = media / n;
	printf("%.2f\n", media);
	return 0;
} 

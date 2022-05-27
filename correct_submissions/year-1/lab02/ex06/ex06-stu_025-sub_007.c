#include <stdio.h>
 int main()
{
	int n,i;
	float min, max, a;
	scanf("%d\n", &n);
	scanf("%f\n", &a);
	min = a;
	max = a;
	i = 1;
	while (i < n){
		scanf("%f\n", &a);
		if (a < min){
			min = a;}
		if (a > max){
			max = a;}
		i += 1;}
	printf("min: %f, max: %f\n", min, max);
	return 0;

}

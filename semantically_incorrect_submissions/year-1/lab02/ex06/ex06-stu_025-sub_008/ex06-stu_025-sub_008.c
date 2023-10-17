#include <stdio.h>
 int main()
{
	int n;
	float min, max, a;
	printf("%s\n", "Insira o numero de parcelas.");
	scanf("%d\n", &n);
	scanf("%f\n", &a);
	min = a;
	max = a;
	n = n - 1;
	while (n > 0){
		scanf("%f\n", &a);
		if (a < min){
			min = a;}
		if (a > max){
			max = a;}}
		n = n - 1;
	printf("min: %f, max: %f\n", min, max);
	return 0;

}

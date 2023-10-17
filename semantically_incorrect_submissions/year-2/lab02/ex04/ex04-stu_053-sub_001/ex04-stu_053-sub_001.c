#include <stdio.h>

int main()
{
	float n1, n2, n3;
	scanf("%f%f%f",&n1,&n2,&n3);
	if  ((n1 < n2) && (n1<n3)) printf("%f",n1);
	if  ((n2 < n1) && (n2<n3)) printf("%f",n2);
	if  ((n3 < n2) && (n3<n1)) printf("%f",n3);
	return 0;
}

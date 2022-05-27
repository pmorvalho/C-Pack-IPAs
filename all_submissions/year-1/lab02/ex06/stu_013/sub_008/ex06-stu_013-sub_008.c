#include <stdio.h>

int main(){
	float n,max,min;
	scanf("%f", &n);
	max=min=n;
	while(n>=0){
		if (n<=min)
			min=n;
		else if (n>max)
			max=n;
		scanf("%f",&n);
	}
	printf("min: %f, max: %f\n", min, max);
	return 0;
}

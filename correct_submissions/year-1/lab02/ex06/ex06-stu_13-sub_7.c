#include <stdio.h>

int main(){
	float n,max,min;
	int i,contador;
	scanf("%d", &contador);
	scanf("%f",&n);
	max=min=n;
	for(i=1;i<contador;i++){
		scanf("%f",&n);
		if (n<=min)
			min=n;
		else if (n>max)
			max=n;
	}
	printf("min: %f, max: %f\n", min, max);
	return 0;
}

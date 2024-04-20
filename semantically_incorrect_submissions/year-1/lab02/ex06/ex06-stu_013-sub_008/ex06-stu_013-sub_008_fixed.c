#include <stdio.h>

int main(){
  float n,max,min;
  int c;
	scanf("%f", &c);
	scanf("%f", &n);
	max=min=n;
	while(c>=1){
		if (n<=min)
			min=n;
		else if (n>max)
			max=n;
		scanf("%f",&n);
		c--;
	}
	printf("min: %f, max: %f\n", min, max);
	return 0;
}



#include <stdio.h>

int main() {
	int N, i;
	scanf("%d",&N);
	float a[N];
	for (i=0; i<N; i++){
		scanf("%f",&a[i]);
	}
	float max = a[0], min = a[0];
	for (i=1; i<N; i++){
		if (max < a[i]){
			max = a[i];	
		}
		if (min > a[i]){
			min = a[i];
		}
	}
	printf("min: %f, max: %f\n", min, max);
	return 0;
}

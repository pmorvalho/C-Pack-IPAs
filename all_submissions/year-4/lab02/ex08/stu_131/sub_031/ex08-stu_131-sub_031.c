
#include <stdio.h>

int main() {
	int n, i;
	float num, media=0;

	scanf("%d", &n);
	for(i=0; i<n; i++) {
		scanf("%f", &num);
		media+=num;
	}
	media /= n;
	printf("%.2f\n", media);
	return 0;
}
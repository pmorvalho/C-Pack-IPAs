

#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	int num = 0, i;
	float media = 0.00;
	for (i=0; i<N; i++){
		scanf("%d", &num);
		media = media + num;
	}
	media = (float) media / N;
	printf("%.2f", media);
	return 0;
}

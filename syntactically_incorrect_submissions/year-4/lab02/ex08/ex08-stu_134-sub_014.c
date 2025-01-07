

#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	int num = 0, i;
	double media = 0;
	for (i=0; i<N; i++){
		scanf("%d", &num);
		media = media + num;
	}
	media = media / N;
	printf("%.2f", media);
	return 0;
}

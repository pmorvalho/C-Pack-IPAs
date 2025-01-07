

#include <stdio.h>

int main(){
	int inputs[3], temp, i, j;
	scanf("%d %d %d", &inputs[0], &inputs[1], &inputs[2]);
	for(i = 0; i<3; i++) {
		for (j=i+1; j<3; j++) {
			if (inputs[i] > inputs[j]) {
				temp = inputs[i];
				inputs[i] = inputs[j];
				inputs[j] = temp;
			}
		}
	}
	printf("%d %d %d\n", inputs[0], inputs[1], inputs[2]);
	return 0;
}

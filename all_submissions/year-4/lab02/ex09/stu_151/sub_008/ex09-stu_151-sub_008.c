#include <stdio.h>

int main () {
	int N, HH, MM, SS;
	
	scanf("%d", &N);
	
	SS = N%60;
	N = (N-SS)/60;
	MM = N%60;
	HH = (N-MM)/60;

	printf("%02d:%02d:%02d\n", HH, MM, SS);
	
	return 0;	
}

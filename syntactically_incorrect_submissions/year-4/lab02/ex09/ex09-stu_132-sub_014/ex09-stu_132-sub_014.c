
#include <stdio.h>

int main() {
	int n, hours, mins, secs;
	scanf("%d", &n);

	hours = n / 3600;
	n = n % 3600;
	mins =  n / 60;
	secs = n % 60;
	printf("%02d:%02d:%02d\n", hours, mins, secs);
	
}

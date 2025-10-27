

#include <stdio.h>

int main() {
	int v;
	int h,m,s;

	scanf("%d", &v);

	m = v/60; 
	s = v % 60;

	h = m/60;
	m = m % 60;


	printf("%02d:%02d:%02d\n", h, m, s);

	return 0;
}

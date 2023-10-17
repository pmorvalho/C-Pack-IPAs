


#include <stdio.h>

int main() {
	int s, m, h;
	scanf("%d", &s);
	if (s < 0) return 1;
	h =  s / 3600;
	s %= 3600;
	m = s / 60;
	s %= 60;
	printf("%02d : %02d : %02d\n", h, m, s);
	return 0;
}
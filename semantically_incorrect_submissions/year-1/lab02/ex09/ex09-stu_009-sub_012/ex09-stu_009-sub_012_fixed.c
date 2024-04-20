#include <stdio.h>

#define HORAEMSEG 3600
#define MINUTOEMSEG 60

int main()
{
	int n, s, h, m;
	scanf("%d", &n);
	h = n/HORAEMSEG;
	n %= HORAEMSEG;
	m = n/MINUTOEMSEG;
	s = n%MINUTOEMSEG;
	printf("%02d:%02d:%02d\n", h, m, s);
	return 0;
}

#include <stdio.h>

#define HORAEMSEG 3600
#define MINUTOEMSEG 60
#define LIMITE 10

int main()
{
	int n, s, h, m;
	scanf("%d", &n);
	h = n/HORAEMSEG;
	n %= HORAEMSEG;
	m = n/MINUTOEMSEG;
	s = n%MINUTOEMSEG;
	if (h < LIMITE) {
		printf("0%d:", h);}
	else {
		printf("%d:", h);
	}
	if (m < LIMITE) {
		printf("0%d:", m);}
	else {
		printf("%d:", m);
	}
	if (s < LIMITE) {
		printf("0%d\n", s);}
	else {
		printf("%d\n", s);
	}
	return 0;
}

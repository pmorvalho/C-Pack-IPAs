#include <stdio.h>

int main()
{	int t, h, m, s;
	scanf("%d\n", &t);
	s = t % 60;
	t = (t - s) / 60;
	m = t % 60;
	t = (t - m) / 60;
	h = t % 60;
	printf("%02d:%02d:%02d\n",h,m,s);
	return 0;
}

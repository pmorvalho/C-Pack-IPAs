

#include <stdio.h>

int main(){
	int time, h, m, s;
	scanf("%d", &time);
	h = time / 3600;
	m = time % 3600 / 60;
	s = time % 3600 % 60;
	printf("%02d:%02d:%02d\n",h, m, s);
}

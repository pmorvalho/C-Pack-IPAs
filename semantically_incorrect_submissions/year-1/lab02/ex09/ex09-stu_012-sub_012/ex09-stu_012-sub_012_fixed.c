#include <stdio.h>



int main() {
	int x;
	int horas;
	int min;
	int seg;
	
	scanf("%d", &x);
	while (x <= 0) {
		
		scanf("%d", &x);
	}
	horas = x / (60*60);
	if (horas < 10) {
	}
	x = x % (60*60);
	min = x / (60);
	x = x % (60);
	seg = x;
	printf("%02d:%02d:%02d\n", horas, min, seg);
	return 0;
}

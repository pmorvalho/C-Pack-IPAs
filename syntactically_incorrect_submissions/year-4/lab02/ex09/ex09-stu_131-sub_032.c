
#include <stdio.h>

int main() {
	int n, h, m, r;
	scanf("%d", &n);
	h = n / 3600;    
    r = n % 3600;    
    m = r / 60;       
    n = r % 60;       
    printf("%02d:%02d:%02d\n", h, m, n);
}
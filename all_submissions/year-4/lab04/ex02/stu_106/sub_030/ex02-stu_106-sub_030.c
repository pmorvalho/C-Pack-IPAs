
#include <stdio.h>
#define VECMAX 100

int main() {
    int n, i, j, max = 0, v[VECMAX];

    scanf("%d", &n);

    for (i = 0; i < n; ++i) { 
    	scanf("%d", &v[i]);
	}

	for (i = 0; i < n; ++i) {
		if (v[i] > max)
			max = v[i]; 
	}

    for (j = 0; j < max; ++j) {
        for (i = 0; i < n; ++i) {
			if (v[i] > 0) putchar('*');
			else putchar(' ');
			v[i] -= 1;
		}
	
        putchar('\n');
    }

    return 0;
}
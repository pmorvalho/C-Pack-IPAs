
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
	
	for (j = max; j > 0; --j) {
        for (i = 0; i < n; ++i) {
            if (v[i] >= j)
                putchar('*');
            else
                putchar(' ');
        }
        putchar('\n');
    }
    
    return 0;
}
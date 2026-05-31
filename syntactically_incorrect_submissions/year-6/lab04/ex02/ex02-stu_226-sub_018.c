

#include <stdio.h>

#define VECMAX 100

int main() {
    int n;
    int valores[VECMAX];

    scanf("%d", &n);

    if (n <= 0 || n >= VECMAX) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &valores[i]);
    }

	int max = valores[0];

	for (int i = 1; i < n; i++) {
		if (valores[i] > max) {
			max = valores[i];
		}
	}

    for (int i = 0; i < max; i++) {
        for (int j = 0; j < n; j++) {
            if (valores[j] > i) {
                putchar('*');
            } else {
                putchar(' ');
            }
        }
        putchar('\n');
    }

    return 0;
}
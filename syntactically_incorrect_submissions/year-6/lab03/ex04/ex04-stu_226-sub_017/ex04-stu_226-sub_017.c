

#include <stdio.h>

int main() {
	int c;
	int dentro_num = 0;
	int zeros = 0;

	while ((c = getchar()) != EOF) {
		if (c >= '1' && c <= '9') {
			putchar(c);
			dentro_num = 1;
		}
		else if (c == '0') {
			if (dentro_num) {
				putchar(c);
			}
			else {
				zeros = 1;
			}
		}
		else {
			if (zeros && !dentro_num) {
				putchar('0');
			}
			putchar(c);
			dentro_num = 0;
			zeros = 0;
		}
	}
}
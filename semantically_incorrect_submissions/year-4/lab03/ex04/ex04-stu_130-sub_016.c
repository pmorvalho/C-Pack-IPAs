

#include <stdio.h>
#include <assert.h>

enum states {ZERO, ESPACO, NUMERO};

int main(){
	enum states state = ESPACO;
	int c = 0;

	while ( (c = getchar()) != EOF){
		if (c == ' ' && state == ZERO){
			state = ESPACO;
			putchar('0');
			putchar(c);
		}else if (c <= 57 && c >= 48 && state == NUMERO){
			state = NUMERO;
			putchar(c);
		}else if (c == 48 && state == ZERO){
			state = ZERO;
		} else if (c == 48 && state == ESPACO){
			state = ZERO;
		}else if ( state == NUMERO && c == ' ' ) {
			putchar(c);
			state = ESPACO;
		}else if ( c <= 57 && c >= 49 && state == ZERO ) {
			putchar(c);
			state = NUMERO;
		} else if (c <= 57 && c >= 49 && state == ESPACO){
			putchar(c);
			state = NUMERO;
		};

	}
	return 0;
}
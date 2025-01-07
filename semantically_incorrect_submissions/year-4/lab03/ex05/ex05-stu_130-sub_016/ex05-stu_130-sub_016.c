
#include <stdio.h>

enum states {FORA, DENTRO, BACK};

int main(){
	char c;
	enum states estado = FORA;

	while((c = getchar()) != EOF){
		if (estado == FORA){
			if (c == '"') estado = DENTRO;
		} else if (estado == DENTRO){
			if (c == '"') printf("\n");
			else if (c == '\\') {estado = BACK;}
			else putchar(c);
		} else if (estado == BACK) {
			estado = DENTRO;
			putchar(c);
			}
	}
	return 0;
}

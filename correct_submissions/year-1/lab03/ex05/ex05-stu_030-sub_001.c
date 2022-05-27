#include <stdio.h>

#define FORA 0
#define DENTRO 1
#define ESCAPE 1

void mensagens(){
	int c, estado, esc;
	estado = FORA;
	esc = 0;
	while ((c = getchar()) != EOF){
		if (c == '"' && esc == 0){
			if (estado == FORA)
				estado = DENTRO;
			else {
				estado = FORA;
				printf("\n");
			}
		} else if (estado == DENTRO && esc == ESCAPE){
                        putchar(c);
                        esc = 0;
                } else if (estado == DENTRO && c == '\\'){
			esc = ESCAPE;
		} else if (estado == DENTRO){
			putchar(c);
		}
	}
}



int main(){
	mensagens();
	return 0;
}

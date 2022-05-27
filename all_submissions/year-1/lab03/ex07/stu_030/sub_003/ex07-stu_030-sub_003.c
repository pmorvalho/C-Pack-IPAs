#include <stdio.h>

#define SOMA 0
#define SUB 1
#define FOP 2

void calculadora(){
	int c, soma, num, op;
	num = 0;
	soma = 0;
	op = FOP;
	while ((c = getchar()) != '\n'){
		if (c >= '0' && c <= '9'){
			num = (num*10) + (c - '0');
		}
		if (c == '+'){
			op = SOMA;
			num = 0;
		}
		if  (c == '-'){
			op = SUB;
			num = 0;
		}
		if (c == ' '){
			if (op == SOMA){
				soma += num;
			} else if (op == SUB){
				soma -= num;
			} else if (op == FOP){
				soma =  num;
			}
		}
	}
	if (op == SOMA){
		soma += num;
	} else if (op == SUB){
		soma -= num;
	} else if (op == FOP){
		soma =  num;
	}
	printf("%d\n", soma);
}


int main(){
	calculadora();
	return 0;
}

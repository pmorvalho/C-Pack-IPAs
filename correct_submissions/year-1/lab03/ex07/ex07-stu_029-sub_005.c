#include <stdio.h>

int main(){
	int resultado=0, current=0,state=0, c;
	while((c=getchar())!=EOF){
		if(c=='+' || c=='-'){
			if(state==0){
				resultado=resultado+current;
				current=0;
			}
			else if(state==1){
				resultado=resultado-current;
				current=0;
			}
			if(c=='+'){
				state=0;
			}
			else if(c=='-'){
				state=1;
			}
		}
		else if(c>='0' && c<='9'){
			current=10*current+(c-'0');
		}
	}
	if(state==0)
		resultado=resultado+current;
	else if(state==1)
		resultado=resultado-current;
	printf("%d\n",resultado);
	return 0;


}

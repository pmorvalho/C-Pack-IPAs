#include <stdio.h>

int main(){
	int c,state;
	while((c=getchar())!=EOF){
		if(c==' ' || c=='\n'){
			if(state==0){
				putchar('0');
			}
			state=0;
		}
		else if(state==0){
			if(c=='0'){
				continue;
			}
			state=1;
		}
		putchar(c);
	}
	return 0;
}
	

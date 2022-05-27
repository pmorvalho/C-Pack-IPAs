#include <stdio.h>

int main(){
	int c,state1=0;
	while((c=getchar())!=EOF){
		if(c=='"'){
			if(state1==0){
				state1=1;
				continue;
			}
			else{
				state1=0;
				printf("\n");
			}
		}
		else if(state1==1){
			if(c=='\\'){
				c=getchar();
				putchar(c);
			}
			else{
				putchar(c);
			}
		}
	}
	return 0;

}

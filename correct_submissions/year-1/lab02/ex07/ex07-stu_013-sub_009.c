#include <stdio.h>

int main(){
	int n,i,res;
	scanf("%d",&n);
	i=n-1;
	res=2;
	while(i>1){
		if (n%i==0)
			res=res+1;
		i=i-1;
	}
	printf("%d\n",res);
	return 0;
}

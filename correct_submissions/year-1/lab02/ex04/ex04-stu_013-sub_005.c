#include <stdio.h>

int main(){
	int n,m,z,maior,menor,meio;
	scanf("%d %d %d",&n,&m,&z);
	if(n>m && n>z){
		maior=n;
		if (m>z){
			meio=m;
			menor=z;
		}
		else{
			meio=z;
			menor=m;
		}
	}
	else if (m>n && m>z){
		maior=m;
		if (n>z){
			meio=n;
			menor=z;
		}
		else{
			meio=z;
			menor=n;
		}
	}
	else{
		maior=z;
		if (n>m){
			meio=n;
			menor=m;
		}
		else{
			meio=m;
			menor=n;
		}
	}
	printf("%d %d %d\n",menor,meio,maior);
	return 0;
}

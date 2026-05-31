

#include <stdio.h>

int main(){

int N,i=0;
float media,soma=0,temp;

scanf("%d",&N);

while(i<N){

scanf("%f",&temp);
soma=soma+temp;
i++;
}
media=soma/N;
printf("%.2f\n", media);
return 0;
}
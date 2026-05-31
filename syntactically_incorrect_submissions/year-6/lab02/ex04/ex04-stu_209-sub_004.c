

#include <stdio.h>

int main(){

    int a,b,c,menor,meio,maior;
    scanf("%d %d %d",&a,&b,&c);
     
    if (a>b) {maior=a;}
    if (c>a) {maior=c;}
    if (b>c) {maior=b;}

    if (a>b) {menor=b;}
    if (b>c) {menor=c;}
    if (c>a) {menor=a;}

    if (a>menor && a<maior ) {meio=a;}
    if (b>c) {menor=c;}
    if (c>a) {menor=a;}


}
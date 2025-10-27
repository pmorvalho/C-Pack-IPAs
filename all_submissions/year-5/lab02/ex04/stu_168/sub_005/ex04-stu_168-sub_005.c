
#include <stdio.h>

int main(){
    int p,s,t,temp;
    scanf("%d %d %d",&p,&s,&t);
    if (p>s) {temp=p;p=s;s=temp;}
    if(p>t) {temp=p;p=t;t=temp;}
    if (s>t) {temp=s;s=t;t=temp;}
    printf("%d %d %d\n",p,s,t);
    return 0;
}
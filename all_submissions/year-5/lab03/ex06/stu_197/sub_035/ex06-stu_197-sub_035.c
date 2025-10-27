
#include <stdio.h>

int main(){
    int n[100]={0},c,i=0,acc=0,ord;
    while((c=getchar())!=EOF){
        n[i]=c;
        i++;
    }
    for(int j=0;j < i ; j++){
        ord=n[j]-48;
        acc+=ord;
    }
    if(acc%9==0){
        printf("yes\n");
    }else{
        printf("no\n");
    }
    

    return 0;
}
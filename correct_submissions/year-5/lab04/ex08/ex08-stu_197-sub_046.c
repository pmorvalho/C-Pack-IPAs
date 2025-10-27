
#include <stdio.h>
#define MAX 100
#define N1 1
#define N2 2

int main(){
    char n1[MAX],n2[MAX],c;
    int i=0,z=0,estado;

    while((c=getchar())!=' '){
        n1[i]=c;
        i+=1;
    }
    n1[i]='\0';
    while((c=getchar())!='\n'){
        n2[z]=c;
        z+=1;
    }
    n2[z]='\0';
    for(i=0;i<=z;i++){
        if(n1[i]>n2[i]){
            estado = N1;
            break;
        }else if(n1[i]<n2[i]){
            estado = N2;
            break;
        }
    }

    i=0;
    if(estado==N1){
        while(n1[i]!='\0'){
            putchar(n1[i]);
            i+=1;
        }
    }else{
        while(n2[i]!='\0'){
            putchar(n2[i]);
            i+=1;
        }
    }
    printf("\n");

    return 0;
}
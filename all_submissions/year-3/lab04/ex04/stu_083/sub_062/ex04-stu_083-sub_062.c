
#include <stdio.h>
#include <string.h>
#define DIM 100

void palindro(char vet[]){
    int x,i,true;
    true=1;
    i=0;
    x=strlen(vet)-1;
    while (i<x)
    {
        if (vet[i]!=vet[x])
        {
            true=0;
            break;
        }
        else{
            i++;
            x--;
        }
        
    }
    if (true==1)
    {
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
}

int main(){
    char str[DIM];
    scanf("%s",str);
    palindro(str);
    return 0;
}
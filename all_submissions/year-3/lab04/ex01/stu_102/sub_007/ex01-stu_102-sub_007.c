
#include<stdio.h>
int main(){
    #define VECMAX 100
    int n,i=0,tab[VECMAX],v,cont=0;
    scanf("%d",&n);
    for (i=0; i < n; i++)
    {
        scanf("%d",&v);
        tab[i] = v;
    }  
    for (i=0; i < n; i++){
        while (cont < tab[i]){
            putchar('*');
            cont++;}
        cont = 0;
        putchar('\n');
    }
    return 0;
}

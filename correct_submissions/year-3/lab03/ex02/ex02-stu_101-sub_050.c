

#include <stdio.h>

void piramide(int n){
    int i=1,numespacos=n-i,numpir=1;
    for(i=1;i<=n;i++){
        for(numespacos=n-i;numespacos>0;numespacos--)
            printf("  ");
        for(numpir=1;numpir<=i;numpir++){
            if(numpir==1)
                printf("%d", numpir);
            else
                printf(" %d", numpir);
        }
        for(numpir=i-1;numpir>=1;numpir--){
            printf(" %d", numpir);
        }
        putchar('\n');
    }
}

int main(){
    int n;
    scanf("%d\n", &n);
    piramide(n);
    return 0;
}




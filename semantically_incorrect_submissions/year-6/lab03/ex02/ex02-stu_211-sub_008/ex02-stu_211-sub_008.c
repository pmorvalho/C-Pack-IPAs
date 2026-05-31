
#include <stdio.h>
void piramide(int N){
    int i,j,esp,v;
    for (i=1;i<=N;i++) {
        esp=2*(N-i);
        printf("%*s",esp,"");
        for (j=1;j>0;j++) {
            if (j<i) {
                printf("%d",j);
                printf("%*s",1," ");
            }
            else {
                printf("%d",j);
                printf("%*s",1," ");
                if (j!=1) {
                    for (v=j-1;v>0;v--) {
                        printf("%d",v);
                        printf("%*s",1," ");
                    }
                    j=-1;
                }
                else {
                    j=-1;
                }
                
            }
        }
        printf("\n");
    }
}

int main () {
    int N;
    scanf("%d",&N);
    piramide(N);
    return 0;
}




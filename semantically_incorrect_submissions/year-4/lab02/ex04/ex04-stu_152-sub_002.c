
#include <stdio.h>

int main(){
    int n1, n2, n3;
    int help, change = 1;

    scanf("%d%d%d",&n1,&n2,&n3);

    while (change == 1){        
        change = 0;

        if (n3 < n2){
            change = 1;
            help = n3;
            n3 = n2;
            n2 = help;
        }
        if (n2 < n1){
            change = 1;
            help = n2;
            n2 = n1;
            n1 = help;
        }
    }

    printf("%d %d %d",n1,n2,n3);
    
    return 0;
}
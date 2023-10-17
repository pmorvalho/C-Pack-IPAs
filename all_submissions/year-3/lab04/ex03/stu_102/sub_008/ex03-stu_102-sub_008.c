
#include <stdio.h>
#define VECMAX 100
int main(){
    int n,max=0,lin=0,col,vec[VECMAX],i;
    scanf("%d",&n);
    while (scanf("%d",vec[lin]) == 1)
        if (max < vec[lin])
            max = vec[lin];
        lin++;
    for(lin = 0; lin < n; lin++){
        for (col=0; col<n; col++){
            if (vec[col] == max)
                putchar('*');
            else
                putchar(' ');
        }
    }
}
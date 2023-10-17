

#include <stdio.h>
#define VECMAX 100

int main(){
    int n, i, j, maior=0, vec[VECMAX];
    scanf ("%d",&n);
    

    if (n < VECMAX){
        for (i = 0; i < n; i++)       
            scanf("%d", &vec[i]);

        for(i=0; i < n; i++){        
            if(vec[i] > maior)
                maior = vec[i];
        }

        for (j = 0; j < maior ; j++){    
            for (i = 0; i < n; i++){     
                if (vec[i] > j)
                    putchar('*');
                else
                    putchar(' ');
            }
            putchar('\n');
        }
    }
    return 0;
}
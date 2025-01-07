
#include <stdio.h>
#include <string.h>
#define VECMAX 100

int main(void){
    int i = 0;
    char vec[VECMAX];

    if(fgets(vec,VECMAX,stdin) == 0){
        return 2;
    }

    while(vec[i++]) 
    {
        if(vec[i-1] >= 'a' && vec[i-1] <= 'z' )
        vec[i-1] = vec[i-1] + ('A'-'a');
    }    
    printf("%s",vec);
    return 0;
}
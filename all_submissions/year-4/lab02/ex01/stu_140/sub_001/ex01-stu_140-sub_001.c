

#include <stdio.h>

int main (){
    int counter;
    int bigger;
    int num;
    scanf("%d",&num);
    bigger=num;
    for (counter=1; counter<3 ;counter++){
        scanf("%d",&num);
        if (num>bigger){
            bigger=num;
        } 
    }
    printf("%d\n", bigger);
    return 0;
}

#include <stdio.h>

int main() {
    int numN, numM, div;

    scanf("%d %d",&numN, &numM);
 
    div=numN%numM;
    if (div==0){
        printf("yes\n");
    } else{
        printf("no\n");
    }
    return 0;
}
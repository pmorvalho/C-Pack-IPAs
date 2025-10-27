
#include <stdio.h>
#define MAX 100
int main(){
    int i;
    char primeiro[MAX],segundo[MAX];
    scanf("%s %s",primeiro,segundo);
    for(i=0;i<MAX-1;i++){
        if(primeiro[i]>segundo[i]){
            printf("%s\n",primeiro);
            return 0;
        }
        else if(segundo[i]>primeiro[i]){
            printf("%s\n",segundo);
            return 0;
        }
    }
    printf("%s\n",primeiro);
    return 0;
}
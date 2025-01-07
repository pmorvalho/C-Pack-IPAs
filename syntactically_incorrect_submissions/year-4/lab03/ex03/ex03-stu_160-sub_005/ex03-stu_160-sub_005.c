
#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    int num_copy = num;
    for(int i = 0; i < num; i++){
        for(int j = 0; j < num; j++){
            if(j == i || j+1 == num_copy){
                printf("* ");
            } 
            else 
                printf("- ");
        }
        printf("\n");
        num_copy--;
    }
    return 0;
}
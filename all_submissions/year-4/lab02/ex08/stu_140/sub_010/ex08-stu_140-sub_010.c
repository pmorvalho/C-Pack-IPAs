
#include <stdio.h>
int main(){
    int numbers,counter;
    float sum=0.0, average,currentnum;
    scanf("%d",&numbers);
    for (counter=0;counter<numbers;counter++){
        scanf("%f",&currentnum);
        sum=currentnum+sum;

    }
    average=sum/numbers;
    printf("%.2f\n", average);
    return 0;
}
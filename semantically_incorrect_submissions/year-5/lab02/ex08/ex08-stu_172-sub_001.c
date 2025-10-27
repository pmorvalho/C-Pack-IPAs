
#include <stdio.h>

int main(){
    int number_of_numbers,i;
    float number,media;
    
    scanf("%d",&number_of_numbers);
    for (i=0; i<number_of_numbers; i++){
        scanf("%f",&number);
        media += number;
    }
    printf("%.2f",media/number_of_numbers);
    return 0;
} 
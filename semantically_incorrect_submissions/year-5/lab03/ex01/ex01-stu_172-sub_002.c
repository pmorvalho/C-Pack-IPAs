
#include <stdio.h>

void quadrado(int length){
    int first_value_line,to_sum;

    for (first_value_line = 1; first_value_line <= length; first_value_line++)
    {
        for(to_sum = 0; to_sum < length; to_sum++)
            printf("%d\t",first_value_line + to_sum);

        printf("\n");
    }
}

int main(){
    int length;
    scanf("%d",&length);
    quadrado(length);
    return 0;
}
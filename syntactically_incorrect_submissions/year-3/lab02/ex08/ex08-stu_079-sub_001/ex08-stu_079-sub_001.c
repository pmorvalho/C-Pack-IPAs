
#include <stdio.h>

int main(){
    int num_nums_ex8 = 0;
    int contador_ex8 = 0;
    float media, num_corrente_ex8, total_ex8 = 0.0;
    scanf("%d", num_nums_ex8);
    while (++contador_ex8 <= num_nums_ex8){
        scanf("%d", num_corrente_ex8);
        total_ex8 = total_ex8 + num_corrente_ex8;
    }
    media = total_ex8/contador_ex8;
    printf("%.2f", media);
    return 0;
}
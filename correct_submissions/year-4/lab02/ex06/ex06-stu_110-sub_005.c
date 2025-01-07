
#include <stdio.h>
int main(){
    int num;
    int polc;
    float numescolhido;
    float menor;
    float maior;
    maior=-999999;
    menor=999999;
    polc=1;
    scanf("%d",&num);
    while (polc<=num)
    {
        scanf("%f",&numescolhido);
        if (menor>numescolhido){
            menor=numescolhido;
        }
        if (maior<numescolhido){
            maior=numescolhido;
        }

        polc =polc+1;

    }
    printf("min: %f, max: %f\n", menor, maior);
    return 0;



}
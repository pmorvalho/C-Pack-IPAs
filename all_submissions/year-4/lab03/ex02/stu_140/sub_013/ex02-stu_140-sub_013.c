
#include <stdio.h>
void piramide(int N){
    int counter,counter2,counter3;
for (counter2=1;counter2<=N;counter2++){
        for (counter3=1;counter3<=(N-counter2)*2;counter3++)
            printf(" ");
        for (counter=1;counter<counter2;counter++)
            printf("%d ",counter);
        printf("%d",counter2);
        for(counter=counter2-1;counter>0;counter--)
            printf(" %d",counter);
        printf("\n");
    }
            
    
}
int main(){
    int N;
    scanf("%d",&N);
    piramide(N);
    return 0;

}
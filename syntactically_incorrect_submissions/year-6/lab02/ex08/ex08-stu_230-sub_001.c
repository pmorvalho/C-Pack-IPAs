

int main(){

    int n,i;
    double val,sum,media;
    scanf("%n",&n);

    for (i=0;i<n;i++){
        scanf("%lf",&val);
        sum+=val;
    }
    media=sum/n;
    printf("%.2f\n", media);
}
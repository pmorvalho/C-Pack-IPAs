

int main(){
    int M, i, cont;
    
    scanf("%d", &M);
    i = 1;
    cont = 0;
    while(i<=M){
        if(M%i == 0){
            cont++;
            i++;
        }
        i++;
    }

}
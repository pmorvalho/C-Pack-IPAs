
int main(){
    int init_zeros = 1;
    char maybe_zero = getchar();
    if(maybe_zero == '0' && init_zeros == 1)
        continue;
    else 
        printf(maybe_zero);


}
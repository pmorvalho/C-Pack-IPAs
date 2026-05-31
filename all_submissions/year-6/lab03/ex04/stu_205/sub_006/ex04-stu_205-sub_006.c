
 #include <stdio.h>

 int main(){
    int interior = 0;
    char x, y;
    x=getchar();
    while (x!=EOF){
        y=getchar();
        if (x=='0' && y>='0' && y<='9' && interior == 0) {x=y;
            continue;}
        else if (x=='0' && (y==' ' || y=='\n')) putchar('0');
        else {putchar(x);
        interior=1;}
        if (x==' ' || x=='\n') {interior=0;}
        x=y;
    }
    return 0;
}
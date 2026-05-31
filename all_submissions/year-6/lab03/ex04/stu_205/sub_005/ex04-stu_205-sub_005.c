
 #include <stdio.h>

 int main(){
    char x, y;
    x=getchar();
    while (x!=EOF){
        y=getchar();
        if (x=='0' && (y>='0' && y<='9')) {x=y;
            continue;}
        else if (x=='0' && (y==' ' || y=='\n')) putchar('0');
        else putchar(x);
        x=y;
    }
    return 0;
}
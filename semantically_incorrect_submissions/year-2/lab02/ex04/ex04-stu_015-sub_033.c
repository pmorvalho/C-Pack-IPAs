    #include <stdio.h>

    int x, y , z;

    int main(){

        scanf("%d%d%d", &x, &y, &z);

        if (x<y && x<z){
            if (y < z)
                printf("%d\t%d\t%d\n", x, y, z);
            else if (z < y)
                printf("%d\t%d\t%d\n", x, z, y);
        }               
        else if (y<x && y<z){
            if (x < z)
                printf("%d\t%d\t%d\n", y, x, z);
            else if (z < y)
                printf("%d\t%d\t%d\n", y, z, x);
        }
        else if (z<x && z<y){
            if (x < y)
                printf("%d\t%d\t%d\n", z, x, y);
            else if (y < x)
                printf("%d\t%d\t%d\n", z, y, x);
            }
        return 0;
    }
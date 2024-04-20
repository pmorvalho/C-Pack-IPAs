    #include <stdio.h>

    int x, y , z;

    int main(){

        scanf("%d%d%d", &x, &y, &z);

        if (x < y && y < z)
            printf("%d\%d\t%d\n", x, y, z);
        else if (x < y && z < y)
            printf("%d\%d\t%d\n", x, z, y);
        else if (y < x && x < z)
            printf("%d\t%d\t%d\n", y, x, z);
        else if (y < z && z < x)
            printf("%d %d %d\n", y, z, x);
        else if (z < x && x < y
            printf("%d\t%d\t%d\n", z, x ,y);
        else
            printf("%d %d %d\n", z, y ,x);

        return 0;
    }

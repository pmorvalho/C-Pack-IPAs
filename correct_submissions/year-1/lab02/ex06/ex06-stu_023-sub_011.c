#include <stdio.h>
int main()
{
int N,cont;
float num,min,max;
scanf ("%d",&N);
scanf ("%f",&num);
min = num;
max= num;
for (cont = 1; cont<= N; cont++)
{
 if (num > max)
   {
    max = num;
   }
 if (num < min)
   {
    min = num;
   }

 scanf ("%f",&num);

}
printf("min: %f, max: %f\n", min, max);
return 0;
}

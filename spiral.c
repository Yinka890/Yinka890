#include<stdio.h>

int main(void)
{
    //find number in row y and column x

    //formula x=0, if y is even then make it y^2, if odd just make it previous number squared plus 1
    //y=0, if x is odd then make x^2, if even make it previous square +1

int t;
    scanf("%i",&t);
    if(t<1 || t>100000)
    {
        printf("invalid!");
    }


    int result[t];
    int m =0;
    int x, y;
    char buffer;

      for(int i=0; i<t; i++)
{


    scanf("%i%c%i",&y, &buffer, &x);
    //store and print output
    if(x==0 || y==0)
    {
        printf("invalid!");
    }

    if(y>=x){
       if(y%2==0)
    {
        m= y * y;
        result[i] = m - x + 1;

    }
    else if(y%2!=0)
    {
        m = (y-1)*(y-1)+1;
        result[i] = m + x - 1;
    }

    }
    else if(x>y)
    {
     if(x%2!=0)
     {
         m = x * x;
         result[i] = m - y + 1;
     }
     else if(x%2==0)
     {
        m = (x-1) * (x-1) + 1;
        result[i] = m + y - 1;
     }
    }



}

for(int j=0; j<t; j++)
{
    printf("\n%i", result[j]);
}



}
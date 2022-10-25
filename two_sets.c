#include<stdio.h>
#include <string.h>



int main(void)
{

    int x;
    printf("Input: ");
    scanf("%i", &x);
    int array[x +1] ;
    memset(array, 0, sizeof(array));
    int m = (x * (x+1)/2);
    int count =0;
    if( m % 2 ==0)
    {
        //TODO
        printf("YES\n");
        m = m/2;



        for(int i=x; i>0; i=i-1)
        {

             if(m > i  && m>0)
            {
                count++;
                m = m - i;
                array[i] = i;

            }
            else if(i >= m && m>0)
            {
                count++;
               array[m] = m;
               i = 0;
            }

        }
        printf("%i\n", count);

        //func
for(int i =x; i > 0; i = i -1)
    {
        if(array[i] != 0)
        {
            printf("%i  ", array[i]);
        }
    }
    printf("\n");

    }



    else{
        printf("NO\n");
        return 1;
    }

    //other set
    printf("%i\n", x - count);

    for(int i=1; i<x; i++)
    {
        if(array[i] ==0)
        {
            printf("%i ", i );
        }
    }
    printf("\n");
    return 0;
}


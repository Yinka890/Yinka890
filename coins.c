#include<stdio.h>

int main(void)
{

     int x;
    printf("INPUT:");
    scanf("%i" , &x);
    char *array[x];


    for(int i =0; i<x; i++)
    { int a;
      int b;
        scanf("%i  %i", &a, &b);
        if((a+b)%3==0 && (2*a >= b || 2*b >= a))
        {
              array[i] = "YES";
        }
        else{
            array[i] = "NO";
        }
    }


    printf("OUTPUT:\n");
    for(int i=0; i<x; i++)
    {
        printf("%s\n", array[i]);

    }
    return 0;
}
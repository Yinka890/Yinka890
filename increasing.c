#include<stdio.h>

int main(void)
{
    int size=0;
    scanf("%i", &size);
    if(size> (2*100000))
    {
        printf("invalid size!\n");
        return 1;
    }

    char array[size];

    scanf("%s", array);

    int input[size-1];
    for(int i =0; i<size-1; i++)
    {
        //0 is 48
        input[i] = array[i] - 48;
    }


int count=0;

   for(int i = 1; i<size; i++)
    {

        if(input[i]<input[i-1])
        {
            count = count + input[i-1] - input[i];
                ;
        }
    }

    printf("%i\n", count);


}
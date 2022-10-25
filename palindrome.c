#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>

const int max = 1000000;


int main(void)
{
//where x is string lenght + 1
    char* s= malloc(sizeof(max));



    printf("INPUT:");
    scanf("%s", s);
    int i=0;
    while(s[i] != '\0')
    {
        i++;
    }

    s = realloc(s,sizeof(i));
    for(int j=0; j<i; j++)
    {
       s[j] = tolower(s[j]);
    }

    //array of letters-> ascii
    int alpha[26] ={0};

//check the number of each alphabet
for(int j=0; j<i; j++)
{

 int m = s[j] - 97;
    alpha[m]++;

}

//declare array palindrome
char palindrome[i];

//if even number of letters
if(i%2==0)
{
    int m =0;
       while(alpha[m] %2 == 0  && m <26)
      {
                 m++;
      }
       if(m!=26)
  {
    printf("NO SOLUTION");
    return 0;
  }

      else if( m ==26)
  {
    int position =0;
    //produce the palindrome
     for(int j=0; j<26; j++)
    {

            while(alpha[j]!=0)
            {
                 palindrome[position] = j + 97;
                 palindrome[i-position-1] = j + 97;
                 alpha[j] = alpha[j] - 2;
                 position++;
            }

    }

  }
}

//if odd numbers of letters
else if(i%2 !=0)
{ int count=0;

    for( int m=0; m<26; m++)
    {
        if(alpha[m]%2 !=0)
        {
           count++;
        }
    }

        if(count > 1)
{
    printf("NO SOLUTION");
    return 0;
}

     else if(1 >= count)
{
        int position =0;
    //produce the palindrome
     for(int j=0; j<26; j++)
    {

            while(alpha[j]!=0 )
            {
                    if(alpha[j] == 1 )
              {
                palindrome[(i/2)] = j +97;
                alpha[j] = alpha[j] -1;

              }
              else
              {
                 palindrome[position] = j + 97;
                 palindrome[i-position-1] = j + 97;
                 alpha[j] = alpha[j] - 2;
                 position++;
                 if(position == (i/2))
                 {
                    position++;
                 }
              }

            }

    }


}
}


for(int j=0; j<i; j++)
{
 printf("%c", toupper(palindrome[j]));
}
printf("\n");
return 0;
}
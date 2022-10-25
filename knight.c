#include<stdio.h>

int main(void)
{
    int w;
    scanf("%i", &w);
    int k = 0;
int n =1;

//delcare the numbering of the board
while(n<=w)
{
   int m = n*n;


   int combination[m+1][m+1];
   combination[m][m] = 0;



        for(int i=1; i<=m; i++)
{
k=0;
     for(int j=1+i; j<=m; j++)
{

k= 1 + k;

}
combination[i][m] = k;
}
//remove the overcounting


    // 2*((n-2)*2 + 1 + 3*(n-2) + 1 ) + (n-4)*(n-2)*4 + (n-4)*2
int sum =0;
for(int i=1; i<=m; i++)
{
 sum = combination[i][m] + sum;
}

sum = sum - (2*((n-2)*2 + 1 + (n-2)*3 + 1)+(n-4)*(n-2)*4 + (n-4)*2);
printf("%i\n", sum);
n++;
}

}
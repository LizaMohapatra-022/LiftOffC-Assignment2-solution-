#include<stdio.h>

int main()
{ 
int i,j,k;
printf("Enter the no of rows:");
scanf("%d",&i);
for(j=0;j<=i-1;j++)
{
for(k=0;k<=i-1;k++)
{
if(j==0||j==i-1||k==0||k==i-1)
{
    printf("*");
    }
    else
    {
    printf(" ");
    }}
   printf("\n",i);
    }
    return 0;
}
 
#include<stdio.h>

int main()
{
   int i[10],j=0,l=0,k;
printf("Enter 10 integer\n");
for(k=0;k<10;k++)
{
scanf("%d",&i[k]);
if(i[k]%2==0)
 j=j+i[k];
else
l=l+i[k];
}
printf("The sum of even number:%d\n",j);
printf("The sum of odd number:%d\n",l);

    return 0;
 }
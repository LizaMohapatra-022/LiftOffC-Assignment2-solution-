#include<stdio.h>
int main()
{
int n,l=0,f,num,k,m=1,e;
printf("enter a number:\n",n);
scanf("%d",&n);
 l=n%10;
printf("The last digit is:%d\n",l);
f=n;
while(f>=10)
{
f=f/10;
m++;
}
printf("The first digit is:%d\n",f);
e=n-l+f;
num=e-f*pow(10,m-1);
k=l*pow(10,m-1)+num;
printf("The new number is:%d",k);
    return 0;
}
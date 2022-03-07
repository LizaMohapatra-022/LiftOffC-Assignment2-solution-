#include<stdio.h>
#include<string.h>

int main()
{
char a[20],b[20];
printf("enter two string:\n",a,b);
scanf("%s %s",&a ,&b);
{
strcat(a,b);
printf("%s",a);
}

    return 0;
}
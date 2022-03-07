#include<stdio.h> 
int main() 
{ 
int a[2][2],b[2][2],s[2][2],p[2][2],m[2][2],k;
 int i,j;
 printf("enter the value of 1st matrix:\n"); 
for(i=0;i<2;i++) 
for(j=0;j<2;j++)
 scanf("%d", &a[i][j]); 
printf("enter the value of 2nd matrix:\n"); 
for(i=0;i<2;i++) 
for(j=0;j<2;j++) 
scanf("%d", &b[i][j]); 
printf("sum of two matrices:\n");
 for(i=0;i<2;i++) 
{ 
for(j=0;j<2;j++) 
{ 
s[i][j]=a[i][j]+b[i][j]; 
printf("%d\t",s[i][j]); 
} 
printf("\n"); 
} 

		//Matrix Multiplication

		for(i=0;i<2;i++)
{
			for(j=0;j<2;j++)
{
 m[i][j]=0;
				for(k=0;k<2;k++)
{
					m[i][j] += a[i][k]*b[k][j];
}}}
		printf("Result of Matirx Multiplication:\n");

		for(i=0;i<2;i++)

		{

			for(j=0;j<2;j++)

				printf("%d\t", m[i][j]);

			printf("\n");

		}

	return 0;

}


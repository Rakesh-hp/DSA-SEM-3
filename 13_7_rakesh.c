#include<stdio.h>
void main()
{
int n;
int num1[n],num2[n];
int i,j=1;
printf("enter number of elements");
scanf("%d",&n);
printf("enter elements of first array\n");
for(i=0;i<n;i++)
	{
	scanf("%d",&num1[i]);
	}
printf("enter elements of second array\n");
for(i=0;i<n;i++)
	{
	scanf("%d",&num2[i]);
	}
for(i=0;i<5;i++)
	{
		if(num1[i]==num2[i])
		{
		j=1;
		}
		else
		{
		j=0;
		break;
		}
	}
printf("%d",j);
}

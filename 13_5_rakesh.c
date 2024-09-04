#include<stdio.h>
void main()
{
int arr[100];
int i,n;
printf("enter number of elements :- ");
scanf("%d",&n);

for(i=0;i<n;i++)
	{
	printf("enter elements :-");
	scanf("%d",&arr[i]);
	}
int largest=arr[0];
for(i=0;i<n;i++)
	{
	if(largest<arr[i])
		{
		largest=arr[i];
		}
	}
printf("largest elemet is %d",largest);
}

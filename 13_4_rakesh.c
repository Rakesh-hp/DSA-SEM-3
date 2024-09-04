#include<stdio.h>
struct student
{
int rollno;
char name[100];
float percent;
}s[5];

void main()
{
int i,j;
struct student temp;
for(i=0;i<=4;i++)
	{
	printf("enter roll number,name and percentage");
	scanf("%d %s %f",&s[i].rollno,s[i].name,&s[i].percent);
	}

for(i=0;i<5;i++)
{
	for(j=i+1;j<5;j++)
	{
		if(s[i].percent<s[j].percent)
		{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
		}
	}
}	

printf("data of students\n");
for(i=0;i<5;i++)
{
printf("roll number :-%d \nname:-%s \n percentage:- %f \n", s[i].rollno,s[i].name,s[i].percent);
}

}

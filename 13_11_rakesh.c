#include<stdio.h>
#include<stdlib.h>

int a[5];
int f = -1;
int r = -1;
/*function prototype*/

void enqueue(int ); // use to insert elements
void dequeue(); // use to delete elements
void display();

void main()
{
int ch;
int n1;

	while(1)
	{
		printf("\n -----Queue operation-----");
		printf("\n1 Push an element into Queue");
		printf("\n2 Pop out an element from queue");
		printf("\n3 Display the queue elements");
		printf("\n4 Exit");
		printf("\n Enter your choice");
		scanf("%d",&ch);
	
		switch(ch)
		{
			case 1 :printf("\n Enter element to be pushed into the queue: ");
				scanf("%d",&n1);
				enqueue(n1);
				break;
			
			case 2 :dequeue(); 				break;
				
			case 3 :display();
				break;
				
			case 4 : exit(1);
			
			default : printf("\n Wrong choice");
					break;
		}// end of switch
	}// end of while
}//end of main

void enqueue(int x)
{
	if(r==4)
	{
		printf("queue is full");
	}
	else
	{
		if(f==-1 && r==-1)
		{
			f=0;
			r=0;
			a[r]=x;
		}
		else
		{
			r++;
			a[r]=x;
		}
	}
}//end of enqueue

void dequeue()
{
	if(f==-1 && r==-1)
	{
		printf("queue is empty");
	}
	else
	{
		if(f==r)
		{
		f=-1;
		r=-1;
		}
		else
		{
		int b= a[f];
		f++;
		printf(" \n %d element is dequeued",b); 
		}
	}
}//end of dequeue

void display()
{
	int i;
	if(f==-1 && r==-1)
	{
		printf("queue is empty");
	}
	else
	{
		printf("elements in queue are");
		for(i=f;i<=r;i++)
			printf("\n %d",a[i]);
	}	
}// end of display

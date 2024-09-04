#include <stdio.h>
#include <stdlib.h>
int Cqueue[5];
int f =-1;
int r =-1;
void enqueue(int );
void dequeue();
void display();
	
	void main()
	{
	int ch;
	int n1;
		
		while(1)
		{
			printf("\n queue operation");
			printf("\n 1. Enqueue an element");
			printf("\n 2. Dequeue an element");
			printf("\n 3. Display the queue elements");
			printf("\n 4. Exit");
			printf("\n Enter your choice:");
			scanf("%d",&ch);
			switch(ch)
			{	
				case 1: printf("\n Enter the element to be enqueued:");
					scanf("%d",&n1);
					enqueue(n1);
					break;
				
				case 2: dequeue();
					break;
						
				case 3: display();
					break;
						
				case 4: exit(1);
				
				default: printf("\n wrong choice");
			}
		}
	}//closing main
	
	void enqueue(int x)
	{
	 	if((f==0&&r==4)||f==r+1)
	 	{
	 	printf("circular queue is full");
	 	}
	 	else if(f==-1 && r==-1)
	 	{
	 	f=0;
	 	r=0;
	 	Cqueue[r]=x;			
	 	}
	 	else
	 	{	
	 	r=(r+1)%5;
	 	Cqueue[r]=x;
	 	}
	}//closing enqueue
	
	void dequeue()
	{
		if(f==-1 && r==-1)
		{
		printf("circular queue is Empty");
		}
		else if(f==r)
		{	
		int a= Cqueue[f];
		printf("\n %d element dequeued is",a);
		f=-1;
		r=-1;
		}
		else
		{
		 int a= Cqueue[f];
		 f=(f+1)%5;
		printf("\n %d element dequeued is",a);
		}
	}
	
	void display()
	{
		int i;
		if(f==-1 && r==-1)
		printf("circular queue is empty");	
		else 
		{
		printf("\n elements in the circular queue are");
		for(i=f;i!=r;i=(i+1)%5)
		{
		printf("\n %d",Cqueue[i]);
		}
		printf("\n %d",Cqueue[i]);
		}	
	}//closing displau

#include<stdio.h>
#include<stdlib.h>

int stack[5];
int top = -1; //stack initialization condition

/*function prototype*/

void push(int ); // use to insert elements
void pop(); // use to delete elements
void display();

void main()
{
int ch;
int n1;

	while(1)
	{
		printf("\n -----Stack operation-----");
		printf("\n1 Push an element into stack");
		printf("\n2 Pop out an element from stack");
		printf("\n3 Display the stack elements");
		printf("\n4 Exit");
		printf("\n Enter your choice");
		scanf("%d",&ch);
	
		switch(ch)
		{
			case 1 :printf("\n Enter element to be pushed into the stock: ");
				scanf("%d",&n1);
				push(n1);
				break;
			
			case 2 :pop();
				break;
				
			case 3 :display();
				break;
				
			case 4 : exit(1);
			
			default : printf("\n Wrong choice");
					break;
		}// end of switch
	}// end of while
}//end of main

void push(int x)
{
	if(top==4)
	{
		printf("Stack is full");
	}
	else
	{
		top++;
		stack[top]=x;
	}
}//end of push

void pop()
{
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		int a= stack[top];
		top--;
		printf("\n %d element popped out of stack",a);
	}
}//end of pop

void display()
{
	int i;
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		printf("\n elements in the stack are");
		for(i=top;i>=0;i--)
			printf("\n %d",stack[i]);
	}	
}// end of display				

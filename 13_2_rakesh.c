#include <stdio.h>

void main()
{
    int no_row,c=1,x,i,j;

    printf("Input number of rows: "); // Prompt the user to input the number of rows.
    scanf("%d",&no_row); // Read the input from the user.

    for(i=0;i<no_row;i++)
    {
        for(x=1;x<=no_row-i;x++) 
            printf("  ");

        for(j=0;j<=i;j++)
        {
            if (j==0||i==0) 
                c=1;
            else
               c=c*(i-j+1)/j; 
            printf("% 4d",c);
        }

        printf("\n"); // Move to the next row.
    }
}

//Problem 2 - Multiple pairs of number 'num'

#include<stdio.h>
int main()
{
    int x,y,num;
	scanf("%d",&num);	
    for (x=1;x<n;x++)
    {
    	for(y=1;y<n;y++)
    	{
    		if (x*y==num)
        	{
	            printf("%d %d",x,y);
	            printf(" \n");
        	}
	}
    }
        return 0;
}

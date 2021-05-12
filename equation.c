#include<stdio.h>
int main()
{
    int i,j,n=130;
    for (i=1;i<n;i++)
    {
    	for(j=1;j<n;j++)
    	{
    		if (i*j==130)
        	{
	            printf("%d %d",i,j);
	            printf(" \n");
        	}
		}
    }
        return 0;
}
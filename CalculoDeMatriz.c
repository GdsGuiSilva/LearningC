#include<stdio.h>

void main()
{
	int m[3][3],n[3][3];
	int v1[3],v2[3];
    int i,j;
    
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            scanf("%d",&n[i][j]);
        }
    }
    
    for(i = 0;i < 3;i++)
    {
    	v1[i] = m[i][i];
	}
	
	for(i = 0;i <= 2;i++)
	{
		v2[i] = n[i][2 - i];
	}
	
	for(i = 0; i< 3;i++)
	{
		v1[i] = v1[i] * v2[i];
	}
	
	for(i = 0; i< 3;i++)
	{
		printf("%d \n",v1[i]);
	}
}

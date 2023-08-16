#include<stdio.h>

void main()
{
	int v[10];
	int i;
	
	for(i = 1;i <=10; i++)
	{
		scanf("%d",&v[i]);
	}
	
	for(i = 1 ;i <= 10 ;i++)
	{
		printf("%d\n",v[i]);
	}
	
	for(i = 10 ;i>0 ;i--)
	{
		printf("%d\n",v[i]);
	}
}


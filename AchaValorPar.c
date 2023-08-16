#include<stdio.h>

void main()
{
	int v[10];
	int i,valor;
	
	for(i = 1;i <=10; i++)
	{
		scanf("%d",&v[i]);
	}
	for(i = 1;i <= 10; i++)
	{
		if(v[i]%2 == 0)
		{
			printf("%d ||""%d\n",i,v[i]);
		}
	}
}

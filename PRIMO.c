#include<stdio.h>

void main()
{
	int n,i,cont;
	cont = 0;
	scanf("%d",&n);
	{
		for(i = 1;i <= n;i++)
		{
			if(n%i == 0)
			{
				cont = cont + 1;
			}
		}
		if(cont == 2)
		{
			printf("EH PRIMO");
		}
		else
		{
			printf("NAO EH PRIMO");
		}
	}
}

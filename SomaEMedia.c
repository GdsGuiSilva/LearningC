#include<stdio.h>
#include<stdlib.h>

void main()
{
	int num,cont,soma;
	float media;
	soma = 0;
	do
	{
		scanf("%d",&num);
		if(num != 0 && num%2 == 0)
		{
			cont++;
			soma = num + soma;
		}
	}while(num != 0);
	
	media = (float)soma / cont;
	printf("%f",media);
}

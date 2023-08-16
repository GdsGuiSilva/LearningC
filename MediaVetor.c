#include<stdio.h>
#define MAX 20

void main()
{
	float notas[MAX],media;
	int i,n;
	do
	{
		scanf("%d",&n);
	}while(n < 0 || n >=20);
	
	for(i = 0;i<n;i++)
	{
		scanf("%f",&notas[i]);
		media = media + notas[i];
	}
	media = media / 10.0;
	for(i = 0;i < n;i++)
	{
		if(notas[i] >= media)
		{
			printf("%f\n",notas[i]);
		}
	}
}

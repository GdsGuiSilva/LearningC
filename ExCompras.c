#include<stdio.h>

int main()
{
	float comp;
	scanf("%f",&comp);
	if(comp <= 2000)
	{
		printf("%f",comp = comp-(comp*0.1));
	}
	else if(comp < 3000 && comp > 2000)
	{
		printf("%f",comp = comp-(comp*0.05));
	}
	else if(comp < 5000 && comp > 2000)
	{
		printf("%f",comp = comp-(comp*0.03));
	}
	else
	{
		printf("%f",comp = comp-(comp*0.02));
	}
}

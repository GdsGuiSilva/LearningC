//GUILHERME DA SILVA
#include<stdio.h>

int main()
{
	int a,b,c,aux;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a > b && a > c)
	{
		aux = a;
		a = c;
		c = aux;
		printf("%d""%d""%d",a,b,c);
	}
	else if(b > a && b > c)
	{
		aux = b;
		b = c;
		c = aux;
		printf("%d""%d""%d",a,b,c);
	}
	else
	{
		printf("%d""%d""%d",a,b,c);
	}
}

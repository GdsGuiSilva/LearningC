#include<stdio.h>
#include<stdlib.h>



int main()
{
	int num,soma;
	scanf("%d",&num);
	while(num > 0)
	{
		soma = (num%10) + soma;
		num = num/10;
	}
	printf("%d",soma);
}

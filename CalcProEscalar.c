#include<stdio.h>

void main()
{
	int u[5] = {1,2,3,4,5};
	int v[5] = {1,2,3,4,5};
	int res,i;
	for(i = 0; i<5; i ++)
	{
		res =+ (u[i]*v[i]);
	}
	printf("%d",res);
}

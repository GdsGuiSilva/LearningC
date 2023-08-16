#include<stdio.h>

void organiza(int *a,int *b,int *c)
{
	if (*a > *b)
	{
	 	if (*b > *c)
		 {
		 	printf("%4d%4d%4d\n", *a, *b, *c);
		 }
	}// a>b // a>b>c
	else if (*a > *c)
	{
		printf("%4d%4d%4d\n", *a, *c, *b);
	}// a>b,c>=b  // a>c>=b
	else
	{
		printf("%4d%4d%4d\n", *c, *a, *b);
	} // c>=a>b
	else if (*b > *c)
	{
		if (*a > *c) 
		{
			printf("%4d%4d%4d\n", *b, *a, *c); 
		}
	 // b>=a0
	}
	else
	{ 
		printf("%4d%4d%4d\n", *b, *c, *a);
	}
	else
	{
	 printf("%4d%4d%4d\n", *c,*b,*a);
	}
	 // b>=a,b>c
// b>=a>c
 // b>c>=a
}
void main()
{
	int *x = 1,*y = 2, *z = 3;
	organiza(&x,&y,&c);
}

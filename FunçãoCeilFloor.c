#include<stdio.h>
#include<math.h>

int main()
{
	float n;
	scanf("%f",&n);
	{
		if(n > 0)
		{
			printf("%f",floor(n));
		}
		else
		{
			printf("%f",ceil(n));
		}
	}
}

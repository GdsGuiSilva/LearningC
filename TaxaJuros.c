#include<stdio.h>
#include<math.h>

void main()
{
	float m,capital,taxa,mes,i;
	
	scanf("%f",&capital);
	scanf("%f",&taxa);
	scanf("%f",&mes);
	printf("CAPITAL : %2.f\n",capital);
	printf("JUROS %2.f\n",taxa);
	taxa = taxa / 100;
	for(i = 1; i <= mes;i ++)
	{
		m = capital * (pow ((1 + taxa),i));
		printf("%2.f MES RS : %f\n",mes,m);
	}
	
}

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

char voto;
int totale,candA,candB,candC,nulo,i;

void main()
{
	system("cls");
	scanf("%d",&totale);
	i = 1;
	while(i <= totale)
	{
		scanf("%s",&voto);
		if(voto == 'A')
		{
			candA++;
		}
		else if(voto == 'B')
		{
			candB++;
		}
		else if(voto == 'C')
		{
			candC++;
		}
		else
		{
			nulo++;
		}
		i++;
	}
	printf("CANDIDATO A : %d\n",candA);
	printf("CANDIDATO B : %d\n",candB);
	printf("CANDIDATO C : %d\n",candC);
	printf("NULO : %d",nulo);
}

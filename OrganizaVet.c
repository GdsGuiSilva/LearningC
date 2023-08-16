#include<stdio.h>

void organiza(int valor_1,int valor_2,int valor_3)
{
	int vet[2];
	vet[0] = valor_1;
	vet[1] = valor_2;
	vet[2] = valor_3;
	
	if(vet[0] < vet[1])
	{
		if(vet[0] < vet[2])
		{
			if(vet[1] < vet[2])
			{
				printf("%d,%d,%d",vet[0],vet[1],vet[2]);
			}
		}
	else
        {

            printf("%d,%d,%d",vet[0], vet[2], vet[1]);

        }
    }
    else if(vet[0] > vet[2])
    {

        printf("%d,%d,%d",vet[1], vet[0], vet[2]);

    }
    else if(vet[1] > vet[2])
    {

        printf("%d,%d,%d",vet[1], vet[2], vet[0]);

    }
    else
    {

        printf("%d,%d,%d",vet[2], vet[1], vet[0]);
    }
}

void main()
{
	int v_1 = 1,v_2 = 3,v_3 = 2;
	organiza(v_1,v_2,v_3);
}

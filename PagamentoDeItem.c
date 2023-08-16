#include<stdio.h>
#include<stdlib.h>

void main()
{
	float pr_etiqueta,total_pagamento;
	int opcao_pagamento;
	scanf("%f",&pr_etiqueta);
	scanf("%d",&opcao_pagamento);
	switch(opcao_pagamento)
	{
		case 1:
			total_pagamento = pr_etiqueta - (pr_etiqueta * 0.1);
			printf("O total a ser pago nesta opcao e : %f \n",total_pagamento);
			break;
			case 2:
			total_pagamento = pr_etiqueta - (pr_etiqueta * 0.15);
			printf("O total a ser pago nesta opcao e : %f \n",total_pagamento);
			break;
			case 3:
			total_pagamento = pr_etiqueta / 2;
			printf("O total a ser pago nesta opcao e (em 2x): %f \n",total_pagamento);
			default :
			total_pagamento = pr_etiqueta + (pr_etiqueta * 0,10);
			printf("O total a ser pago nesta opcao e(em 2x com 10% de juros) : %f \n",total_pagamento);
	}
}

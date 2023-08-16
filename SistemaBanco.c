//GUILHERME DA SILVA
//FIZ UM PEQUENO PROGRAMA QUE CADASTRA CLIENTES EM UM BANCO. O PROGRAMA ASSUME QUE VOC� � O ADMINISTRADOR DO SISTEMA E VOC� � LIVRE PARA CADASTRAR.
//AP�S ISSO VOC� PODE SIMULAR UM CAIXA ELETR�NICO COMO SAQUE E DEP�SITO
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

float efdeposito(float dep, float* sal) //FUN��O QUE CALCULA DEPOSITO E RETORNA O SALDO
{
	*sal += dep;
	return *sal;
}

float efsaque(float saq, float* sal) //FUN��O QUE CALCULA O SAQUE E RETORNA O SALDO
{
	*sal -= saq;
	return *sal;
}

void cadsenha(int* senha) // FUN��O QUE CADASTRA A SENHA
{
	printf("� sua primeira vez aqui.\n");
	printf("Cadastre sua senha:\n");
	scanf("%d", senha);
}

void exibirMenu() //FUN��O DO MENU
{
	printf("******************************\n");
	printf("*          MENU             *\n");
	printf("******************************\n\n");
	printf("DIGITE A OP��O:\n");
	printf("1 PARA CADASTRO\n");
	printf("2 PARA VERIFICAR CADASTRO\n");
	printf("3 PARA EFETUAR DEP�SITO\n");
	printf("4 PARA EFETUAR SAQUE\n");
	printf("5 PARA VERIFICAR SALDO\n");
	printf("DIGITE ZERO PARA SAIR\n");
}

int main()
{
	char nome[30]; 
	int opcao, senha, senhaatual = 0;
	float depos, saque;
	float saldo = 0;

	printf("******************************\n");
	printf("*          BANCO             *\n");
	printf("******************************\n\n");
	printf("OL�\n");
	printf("Vamos cadastrar sua senha. Digite zero para efetuar o cadastro:\n");
	scanf("%d", &senha);

	if (senha == 0)  //VERIFICA SE H� SENHA CADASTRADA
	{
		cadsenha(&senhaatual);
		printf("Certo!\n");
		printf("Agora vamos acessar o sistema:\n");
		scanf("%d", &senha);
	}

	if (senha != senhaatual)
	{
		printf("ACESSO NEGADO\n");
		return 0;
	}
	else
	{
		printf("ACESSO OK\n");
	}

	exibirMenu();

	scanf("%d", &opcao); // L� A OP��O DO ADMINISTRADOR DO SISTEMA
	fflush(stdin);

	while (opcao != 0)
	{
		switch (opcao)
		{
			case 1: //OP��O 1
				printf("Cadastro:\n");
				scanf("%s", nome);
				saldo = 0;
				break;
			case 2: //VERIFICA SE TEM CLIENTE CADASTRADO
				if (strlen(nome) == 0)
				{
					printf("N�o existe cliente cadastrado.\n");
				}
				else //CADASTRA CLIENTE
				{
					printf("%s\n", nome);
					printf("%.2f\n", saldo);
				}
				break;
			case 3:
				if (strlen(nome) == 0) //VERIFICA SE H� CLIENTE CADASTRADO
				{
					printf("N�o � poss�vel depositar sem um cliente cadastrado.\n");
				}
				else //FAZ DEPOSITO
				{
					scanf("%f", &depos); 
					saldo = efdeposito(depos, &saldo);
					printf("SEU SALDO %.2f\n", saldo);
				}
				break;
			case 4:
				if (strlen(nome) == 0) //VERIFICA SE H� CLIENTE CADASTRADO
				{
					printf("N�o � poss�vel sacar sem um cliente cadastrado.\n");
					break;
				}
				if (saldo <= 0) //VERIFICA SE H� SALDO
				{
					printf("VOC� N�O POSSUI SALDO PARA SAQUE\n");
				}
				else //EFETUA SAQUE
				{
					scanf("%f", &saque);
					saldo = efsaque(saque, &saldo);
					printf("SEU SALDO %.2f\n", saldo);
				}
				break;
				default:
				break;
		}

		exibirMenu();

		scanf("%d", &opcao);
		fflush(stdin);
	}
	return 0;
}

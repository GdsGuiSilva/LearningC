#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int soma(int num1,int num2)
{
	int result;
	result = num1+num2;
	return result;
	
}

int subtracao(int num1,int num2)
{
	int result;
	result = num1-num2;
	return result;
}

int multiplicacao(int num1,int num2)
{
	
	int result;
	result = num1*num2;
	return result;
}

int divisaoint(int num1,int num2)
{
	int result;
	result = num1/num2;
	return result;
}

int divisaores(int num1,int num2)
{
	int result;
	result = num1%num2;
	return result;
}

int potencia(int num1,int num2)
{
	int result;
	result = pow(num1,num2);
	return result;
}

int raizq(int num1)
{
	int result;
	result = sqrt(num1);
	return result;
}

void main()
{
	int a,b;
	printf("OLA!\n");
	printf("DIGITE DOIS NUMEROS");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("SOMA :%d\n",soma(a,b));
	printf("SUBTRACAO :%d\n",subtracao(a,b));
	printf("MULTIPLICACAO :%d\n",multiplicacao(a,b));
	printf("DIVISAO INTEIRA :%d\n",divisaoint(a,b));
	printf("RESTO DA DIVISAO :%d\n",divisaores(a,b));
	printf("POTENCIA :%d\n",potencia(a,b));
	printf("RAIZ QUADRADA :%d",raizq(a));
}

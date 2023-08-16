#include<stdio.h>
#include<stdlib.h>

void main()
{
	float media_e,media_a,n1,n2,n3;
	int ID_Aluno;
	printf("Digite o numero do aluno : \n");
	scanf("%d",&ID_Aluno);
	printf("Agora digite as tres notas do aluno : \n");
	scanf("%f",&n1);
	scanf("%f",&n2);
	scanf("%f",&n3);
	printf("Agora digite a media dos exercicios deste trimestre : \n");
	scanf("%f",&media_e);
	media_a = (n1 + (n2 * 2) + (n3 * 3) + media_e)/7;
	if(media_a >= 90)
	{
		printf("O Aluno com ID : %d \n",ID_Aluno);
		printf("Notas n1 : %f,n2 : %f e n3 : %f \n",n1,n2,n3);
		printf("A media dos exercicios ficou em %f \n",media_e);
		printf("A sua media de aproveitamento ficou em %f \n",media_a);
		printf("Este aluno ficou com conceito A e esta APROVADO");
	}
	else if(media_a >= 75 && media_a < 90)
	{
		printf("O Aluno com ID : %d \n",ID_Aluno);
		printf("Notas n1 : %f,n2 : %f e n3 : %f \n",n1,n2,n3);
		printf("A media dos exercicios ficou em %f \n",media_e);
		printf("A sua media de aproveitamento ficou em %f \n",media_a);
		printf("Este aluno ficou com conceito B e esta APROVADO");
	}
	else if(media_a >= 60 && media_a < 75)
	{
		printf("O Aluno com ID : %d \n",ID_Aluno);
		printf("Notas n1 : %f,n2 : %f e n3 : %f \n",n1,n2,n3);
		printf("A media dos exercicios ficou em %f \n",media_e);
		printf("A sua media de aproveitamento ficou em %f \n",media_a);
		printf("Este aluno ficou com conceito C e esta APROVADO");
	}
	else if(media_a >= 40 && media_a<60)
	{
		printf("O Aluno com ID : %d \n",ID_Aluno);
		printf("Notas n1 : %f,n2 : %f e n3 : %f \n",n1,n2,n3);
		printf("A media dos exercicios ficou em %f \n",media_e);
		printf("A sua media de aproveitamento ficou em %f \n",media_a);
		printf("Este aluno ficou com conceito D e esta REPROVADO");
	}
	else
	{
		printf("O Aluno com ID : %d \n",ID_Aluno);
		printf("Notas n1 : %f,n2 : %f e n3 : %f \n",n1,n2,n3);
		printf("A media dos exercicios ficou em %f \n",media_e);
		printf("A sua media de aproveitamento ficou em %f \n",media_a);
		printf("Este aluno ficou com conceito E e esta REPROVADO");
	}
}

#include<stdio.h>

void main()
{
	float n1,n2,media;
	do{
		printf("Digite a nota 1 : ");
		scanf("%f",&n1);
	}while(n1 < 0 || n1 > 10);
	
	do{
		printf("Digite a nota 2 : ");
		scanf("%f",&n2);
}while(n2 < 0 || n2 > 10);
	
	media = (n1+n2)/2;
	printf("A media : %f",media);
}

#include<stdio.h>

void main()
{
	int m[5][3], n[5][3];
    int i, j;
    int maior_valor_m, linha_maior_m, coluna_maior_m;
    int maior_valor_n, linha_maior_n, coluna_maior_n;
    
    printf("Digite os valores da matriz M:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
    
    printf("Digite os valores da matriz N:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &n[i][j]);
        }
    }
    
    maior_valor_m = m[0][0];
    linha_maior_m = 0;
    coluna_maior_m = 0;
    
    maior_valor_n = n[0][0];
    linha_maior_n = 0;
    coluna_maior_n = 0;
    
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (m[i][j] > maior_valor_m)
            {
                maior_valor_m = m[i][j];
                linha_maior_m = i;
                coluna_maior_m = j;
            }
            
            if (n[i][j] > maior_valor_n)
            {
                maior_valor_n = n[i][j];
                linha_maior_n = i;
                coluna_maior_n = j;
            }
        }
    }
    
    printf("Na matriz M, o maior valor e %d e esta na linha %d, coluna %d.\n", maior_valor_m, linha_maior_m, coluna_maior_m);
    printf("Na matriz N, o maior valor e %d e esta na linha %d, coluna %d.\n", maior_valor_n, linha_maior_n, coluna_maior_n);
}

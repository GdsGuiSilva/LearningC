#include <stdio.h>

    int p(int b, int e) {
     int resultado = 1;
    int i;

    for (i = 1; i <= e; i++) {
        resultado *= b;
    }

    return resultado;
}

int main() {
    int a, b;

    printf("Digite o primeiro numero inteiro: ");

    scanf("%d", &a);

    printf ("Digite o segundo numero inteiro: ");
    scanf ("%d", &b);

     int resultado = p(a, b);

    printf("%d elevado a %d = %d\n", a, b, resultado);

    return 0;
}

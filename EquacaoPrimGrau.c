#include<stdio.h>

void calcular_parametros_reta(double x, double y, double x1, double y1, double *b, double *m) {
    if (x == x1) {
        printf("Os pontos não devem ter a mesma coordenada x.\n");
        return;
    }
    *m = (y - y1) / (x - x1);
    *b = y - (*m) * x;
}

int main() {
    double x, y, x1, y1;
    double b, m;
    printf("Digite as coordenadas do primeiro ponto (x, y): ");
    scanf("%lf %lf", &x, &y);
    
    printf("Digite as coordenadas do segundo ponto (x1, y1): ");
    scanf("%lf %lf", &x1, &y1);
    
    calcular_parametros_reta(x, y, x1, y1, &b, &m);
    
    printf("b = %.2lf\n", b);
    printf("m = %.2lf\n", m);
    
    return 0;
}


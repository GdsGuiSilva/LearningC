#include <stdio.h>

void zerar_variaveis(int *var1, int *var2) {
    *var1 = 0;
    *var2 = 0;
}

int main() {
    int a = 10;
    int b = 5;
    
    printf("Valores iniciais: a = %d, b = %d\n", a, b);
    
    zerar_variaveis(&a, &b);
    
    printf("Valores zerados: a = %d, b = %d\n", a, b);
    
    return 0;
}

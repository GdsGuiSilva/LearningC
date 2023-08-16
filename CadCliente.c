#include <stdio.h>

#define MAX_CLIENTES 100

typedef struct {
    char nome[50];
    int idade;
    char endereco[100];
} Cliente;

void cadastrarClientes(Cliente clientes[], int numClientes) {
    int i; // Declaração da variável 'i' fora do loop 'for'
    for (i = 0; i < numClientes; i++) {
        printf("=== Cadastro do cliente %d ===\n", i+1);
        
        printf("Digite o nome do cliente: ");
        fgets(clientes[i].nome, 50, stdin);
        
        printf("Digite a idade do cliente: ");
        scanf("%d", &(clientes[i].idade));
        
        printf("Digite o endereco do cliente: ");
        getchar(); // Limpar o buffer do teclado
        fgets(clientes[i].endereco, 100, stdin);
    }
}

void exibirClientes(Cliente clientes[], int numClientes) {
    int i; // Declaração da variável 'i' fora do loop 'for'
    printf("\n=== Lista de clientes ===\n");
    for (i = 0; i < numClientes; i++) {
        printf("Cliente %d:\n", i+1);
        printf("Nome: %s", clientes[i].nome);
        printf("Idade: %d\n", clientes[i].idade);
        printf("Endereco: %s", clientes[i].endereco);
        printf("\n");
    }
}

int main() {
    Cliente clientes[MAX_CLIENTES];
    int numClientes;
    
    printf("Digite o numero de clientes a serem cadastrados: ");
    scanf("%d", &numClientes);
    
    getchar(); // Limpar o buffer do teclado
    
    cadastrarClientes(clientes, numClientes);
    
    exibirClientes(clientes, numClientes);
    
    return 0;
}

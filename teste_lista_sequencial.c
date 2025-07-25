#include <stdio.h>
#include "lista_sequencial.h"

void testar_operacoes() {
    ListaSequencial lista;
    int valor;
    
    printf("=== TESTES DA LISTA SEQUENCIAL ===\n\n");
    
    criar_lista(&lista);
    printf("1. Lista criada. Tamanho: %d\n", tamanho(&lista));
    
    printf("2. Lista vazia? %s\n", esta_vazia(&lista) ? "Sim" : "Não");
    
    printf("\n3. Inserindo elementos...\n");
    inserir(&lista, 1, 10); 
    inserir(&lista, 2, 20); 
    inserir(&lista, 1, 5);  
    printf("Lista após inserções: ");
    imprimir_lista(&lista);
    
    printf("4. Tamanho da lista: %d\n", tamanho(&lista));
    
    printf("5. Elemento na posição 2: %d\n", obter_elemento(&lista, 2));
    
    printf("\n6. Modificando elemento...\n");
    modificar_elemento(&lista, 3, 25); 
    printf("Lista após modificação: ");
    imprimir_lista(&lista);
    
    printf("\n7. Removendo elemento...\n");
    remover(&lista, 2, &valor); 
    printf("Valor removido: %d\n", valor);
    printf("Lista após remoção: ");
    imprimir_lista(&lista);
    
    printf("\n8. Lista cheia? %s\n", esta_cheia(&lista) ? "Sim" : "Não");
}

int main() {
    testar_operacoes();
    return 0;
}
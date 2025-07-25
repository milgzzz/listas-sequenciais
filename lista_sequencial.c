#include <stdio.h>
#include "lista_sequencial.h"

void criar_lista(ListaSequencial *lista) {
    lista->tamanho = 0;
}

int esta_vazia(ListaSequencial *lista) {
    return lista->tamanho == 0;
}

int esta_cheia(ListaSequencial *lista) {
    return lista->tamanho == MAX;
}

int tamanho(ListaSequencial *lista) {
    return lista->tamanho;
}

int obter_elemento(ListaSequencial *lista, int posicao) {
    if (posicao < 1 || posicao > lista->tamanho) {
        printf("Posição inválida!\n");
        return -1; 
    }
    return lista->elementos[posicao-1];
}

void modificar_elemento(ListaSequencial *lista, int posicao, int novo_valor) {
    if (posicao < 1 || posicao > lista->tamanho) {
        printf("Posição inválida!\n");
        return;
    }
    lista->elementos[posicao-1] = novo_valor;
}

int inserir(ListaSequencial *lista, int posicao, int valor) {
    if (esta_cheia(lista)) {
        printf("Lista cheia!\n");
        return 0;
    }
    
    if (posicao < 1 || posicao > lista->tamanho + 1) {
        printf("Posição inválida!\n");
        return 0;
    }
    
    for (int i = lista->tamanho; i >= posicao; i--) {
        lista->elementos[i] = lista->elementos[i-1];
    }
    
    lista->elementos[posicao-1] = valor;
    lista->tamanho++;
    return 1;
}

int remover(ListaSequencial *lista, int posicao, int *valor_removido) {
    if (esta_vazia(lista)) {
        printf("Lista vazia!\n");
        return 0;
    }
    
    if (posicao < 1 || posicao > lista->tamanho) {
        printf("Posição inválida!\n");
        return 0;
    }
    
    *valor_removido = lista->elementos[posicao-1];
    
    for (int i = posicao-1; i < lista->tamanho-1; i++) {
        lista->elementos[i] = lista->elementos[i+1];
    }
    
    lista->tamanho--;
    return 1;
}

void imprimir_lista(ListaSequencial *lista) {
    printf("[");
    for (int i = 0; i < lista->tamanho; i++) {
        printf("%d", lista->elementos[i]);
        if (i < lista->tamanho-1) printf(", ");
    }
    printf("]\n");
}
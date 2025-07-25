#ifndef LISTA_SEQUENCIAL_H
#define LISTA_SEQUENCIAL_H

#define MAX 100 

typedef struct {
    int elementos[MAX];
    int tamanho;
} ListaSequencial;

void criar_lista(ListaSequencial *lista);

int esta_vazia(ListaSequencial *lista);

int esta_cheia(ListaSequencial *lista);

int tamanho(ListaSequencial *lista);

int obter_elemento(ListaSequencial *lista, int posicao);

void modificar_elemento(ListaSequencial *lista, int posicao, int novo_valor);

int inserir(ListaSequencial *lista, int posicao, int valor);

int remover(ListaSequencial *lista, int posicao, int *valor_removido);

void imprimir_lista(ListaSequencial *lista);

#endif
#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura do Nó (Como uma Classe em Java)
typedef struct No {
    int valor;
    struct No *esquerda;
    struct No *direita;
} No;

// Função para criar um novo nó na memória (Manual Memory Management)
No* criarNo(int valor) {
    No *novo = (No*)malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro: Memória cheia!\n");
        exit(1);
    }
    novo->valor = valor;
    novo->esquerda = NULL;
    novo->direita = NULL;
    return novo;
}

// Função Complexa: Inserção usando Recursão
No* inserir(No* raiz, int valor) {
    if (raiz == NULL) return criarNo(valor);

    if (valor < raiz->valor) {
        raiz->esquerda = inserir(raiz->esquerda, valor);
    } else if (valor > raiz->valor) {
        raiz->direita = inserir(raiz->direita, valor);
    }
    return raiz;
}

// Percurso em Ordem (Lógica de Algoritmos)
void exibirEmOrdem(No* raiz) {
    if (raiz != NULL) {
        exibirEmOrdem(raiz->esquerda);
        printf("%d ", raiz->valor);
        exibirEmOrdem(raiz->direita);
    }
}

// Função para libertar a memória (O que o Java faz sozinho, o C exige que tu faças)
void limparMemoria(No* raiz) {
    if (raiz != NULL) {
        limparMemoria(raiz->esquerda);
        limparMemoria(raiz->direita);
        free(raiz);
    }
}

int main() {
    No *raiz = NULL;
    int valores[] = {50, 30, 70, 20, 40, 60, 80};
    int n = sizeof(valores) / sizeof(valores[0]);

    printf("--- SISTEMA DE GESTÃO DE DADOS EM C ---\n");
    printf("Inserindo elementos na Árvore Binária...\n");

    for(int i = 0; i < n; i++) {
        raiz = inserir(raiz, valores[i]);
    }

    printf("Dados ordenados (Busca Binária): ");
    exibirEmOrdem(raiz);
    printf("\n---------------------------------------\n");

    // No C, se abres a memória, tens de a fechar!
    limparMemoria(raiz);
    printf("Memória libertada com sucesso.\n");

    return 0;
}

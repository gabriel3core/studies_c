#include <stdio.h>
#include <stdbool.h> // Para usar o tipo bool

#define TAMANHO 5

int frente, tras;
int fila[TAMANHO];

// Inicializa a fila
void inicia_fila() {
    frente = 0;
    tras = -1;
}

// Verifica se a fila está vazia
bool Fila_Vazia() {
    return tras < frente;
}

// Verifica se a fila está cheia
bool Fila_Cheia() {
    return tras == TAMANHO - 1;
}

// Adiciona um elemento à fila
void enfileirar(int valor) {
    if (Fila_Cheia()) {
        printf("Fila cheia\n");
    } else {
        fila[++tras] = valor;
    }
}

// Remove um elemento da fila
void desenfileirar(int *valor) {
    if (Fila_Vazia()) {
        printf("Fila vazia\n");
    } else {
        *valor = fila[frente++];
    }
}

// Exibe os elementos da fila
void mostrar() {
    if (Fila_Vazia()) {
        printf("Fila vazia\n");
    } else {
        printf("Fila: ");
        for (int i = frente; i <= tras; i++) {
            printf("%d ", fila[i]);
        }
        printf("\n");
    }
}

// Exibe o primeiro elemento da fila
void fila_exibe(int *valor) {
    if (Fila_Vazia()) {
        printf("Fila vazia\n");
    } else {
        *valor = fila[frente];
        printf("Primeiro elemento da fila: %d\n", *valor);
    }
}

// Retorna o tamanho atual da fila
int tamanho() {
    return tras - frente + 1;
}

int main() {
    int valor;

    inicia_fila();

    enfileirar(90);
    enfileirar(20);
    enfileirar(30);
    enfileirar(40);

    mostrar();

    desenfileirar(&valor);
    printf("Elemento removido: %d\n", valor);

    mostrar();

    fila_exibe(&valor);

    return 0;
}
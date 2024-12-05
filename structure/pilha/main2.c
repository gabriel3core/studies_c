#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXTAM 5
int Pilha[MAXTAM];
int topo;

void Pilha_Inicia() {
    topo = -1;
}

bool Pilha_Vazia() {
    return topo == -1;
}

bool Pilha_Cheia() {
    return topo == MAXTAM - 1;
}

void Pilha_Insere(int valor) {
    if (Pilha_Cheia()) {
        printf("Pilha está cheia\n");
    } else {
        topo++;
        Pilha[topo] = valor;
    }
}

int Pilha_Desempilha() {
    int valor = 0; // Inicializado como 0
    if (Pilha_Vazia()) {
        printf("Pilha está vazia\n");
    } else {
        valor = Pilha[topo];
        topo--;
    }
    return valor;
}

void exibe_top() {
    if (Pilha_Vazia()) {
        printf("Pilha está vazia\n");
    } else {
        printf("Topo: %d\n", Pilha[topo]);
    }
}

int Pilha_Tamanho() {
    return topo + 1;
}

void mostrar() {
    if (Pilha_Vazia()) {
        printf("Pilha está vazia\n");
    } else {
        printf("Elementos da pilha:\n");
        for (int i = 0; i <= topo; i++) {
            printf("%d\n", Pilha[i]);
        }
    }
}

int main() {
    Pilha_Inicia();

    Pilha_Insere(10);
    Pilha_Insere(20);
    Pilha_Insere(30);
    mostrar();

    printf("Tamanho da pilha: %d\n", Pilha_Tamanho());

    printf("Desempilhando: %d\n", Pilha_Desempilha());
    mostrar();

    exibe_top();

    return 0;
}

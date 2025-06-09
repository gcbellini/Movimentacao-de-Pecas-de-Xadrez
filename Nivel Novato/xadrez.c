#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    int mov_torre = 5;
    int mov_bispo = 5;
    int mov_rainha = 8;

    printf("--- Simulação de Movimento de Peças de Xadrez ---\n\n");

    system("pause");
    system("cls");

    // --- 1. Movimento da Torre (usando a estrutura 'for') ---
    printf("--- Movimento da Torre (%d casas para a direita) ---\n", mov_torre);
    // O laço 'for' inicializa o contador (i=1), define a condição de parada (i <= MOVIMENTOS_TORRE)
    // e o incremento (i++) em uma única linha.
    for (int i = 1; i <= mov_torre; i++) {
        printf("Movimento %d: Direita\n", i);
    }
    printf("--------------------------------------------------\n\n");
    system("pause");
    system("cls");


    // --- 2. Movimento do Bispo (usando a estrutura 'while') ---
    printf("--- Movimento do Bispo (%d casas na diagonal Cima/Direita) ---\n", mov_bispo);
    int contador_bispo = 1;

    while (contador_bispo <= mov_bispo) {
        // Imprime a combinação das direções para simular a diagonal.
        printf("Movimento %d: Cima, Direita\n", contador_bispo);
        contador_bispo++; // Incrementa o contador para evitar um laço infinito.
    }
    printf("------------------------------------------------------------\n\n");
    system("pause");
    system("cls");


    // --- 3. Movimento da Rainha (usando a estrutura 'do-while') ---
    printf("--- Movimento da Rainha (%d casas para a esquerda) ---\n", mov_rainha);
    int contador_rainha = 1; // Variável de controle inicializada antes do laço.

    do {
        printf("Movimento %d: Esquerda\n", contador_rainha);
        contador_rainha++; // Incrementa o contador.
    } while (contador_rainha <= mov_rainha); // A condição é verificada aqui.
    printf("-----------------------------------------------------\n");
    system("pause");
    system("cls");

    printf("\nSimulação concluída com sucesso!\n");

    return 0;
}

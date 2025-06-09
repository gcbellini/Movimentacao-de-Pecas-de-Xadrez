#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- Protótipos das Funções ---
void moverTorreRecursivo(int passos_restantes);
void moverBispoRecursivo(int passos_restantes);
void moverRainhaRecursivo(int passos_restantes);
void moverCavaloComplexo();

int main() {

    setlocale(LC_ALL, "portuguese");

    int mov_torre = 5;
    int mov_bispo = 5;
    int mov_rainha = 8;

    printf("--- Simulação de Movimento de Peças de Xadrez ---\n\n");

    system("pause");
    system("cls");

    // --- 1. Movimento da Torre (com Recursividade) ---

    printf("\n--- Movimento da Torre (%d casas para a direita) ---\n\n", mov_torre);
    moverTorreRecursivo(mov_torre);

    printf("\n--------------------------------------------------\n");
    system("pause");
    system("cls");

    ///////////////////////////////////////////////////////////////////////////

    // --- 2. Movimento do Bispo (com Recursividade) ---

    printf("\n--- Movimento do Bispo (%d casas na diagonal Cima/Direita) ---\n\n", mov_bispo);
    moverBispoRecursivo(mov_bispo);

    printf("\n------------------------------------------------------------\n");
    system("pause");
    system("cls");

    ///////////////////////////////////////////////////////////////////////////

    // --- 3. Movimento da Rainha (com Recursividade) ---

    printf("\n--- Movimento da Rainha (%d casas para a esquerda) ---\n\n", mov_rainha);
    moverRainhaRecursivo(mov_rainha);

    printf("\n-----------------------------------------------------\n");
    system("pause");
    system("cls");

    ///////////////////////////////////////////////////////////////////////////

    // --- 4. Movimento do Cavalo (com Loop Complexo) ---

    printf("\n--- Movimento do Cavalo (2 casas p/ Cima, 1 p/ Direita) ---\n\n");
    moverCavaloComplexo();

    printf("\n-----------------------------------------------------------\n");
    system("pause");
    system("cls");

    printf("\nSimulação concluída com sucesso!\n");

    return 0;
}

///////////////////////////////////////////////////////////////////////////

// --- Implementação das Funções Recursivas ---

///////////////////////////////////////////////////////////////////////////

void moverTorreRecursivo(int passos_restantes) {
    // Caso Base: a condição de parada da recursão.
    // Se não houver mais passos a dar, a função simplesmente retorna.
    if (passos_restantes <= 0) {
        return;
    }

    // Ação: Imprime o movimento do passo atual.
    printf("Movimento: Direita\n");

    // Passo Recursivo: chama a si mesma com um problema menor (passos - 1).
    moverTorreRecursivo(passos_restantes - 1);
}

///////////////////////////////////////////////////////////////////////////

void moverBispoRecursivo(int passos_restantes) {
    // Caso Base: condição de parada.
    if (passos_restantes <= 0) {
        return;
    }

    // Ação: Imprime o movimento diagonal combinado.
    printf("Movimento: Cima, Direita\n");

    // Passo Recursivo: chama a si mesma com um problema menor.
    moverBispoRecursivo(passos_restantes - 1);
}

///////////////////////////////////////////////////////////////////////////

void moverRainhaRecursivo(int passos_restantes) {
    // Caso Base: condição de parada.
    if (passos_restantes <= 0) {
        return;
    }

    // Ação: Imprime o movimento do passo atual.
    printf("Movimento: Esquerda\n");

    // Passo Recursivo: chama a si mesma com um problema menor.
    moverRainhaRecursivo(passos_restantes - 1);
}

///////////////////////////////////////////////////////////////////////////

// --- Implementação da Função com Loop Complexo ---

///////////////////////////////////////////////////////////////////////////

void moverCavaloComplexo() {
    int passos_cima = 2;
    int passos_direita = 1;

    int contador_cima = 0;
    int contador_direita = 0;

    // Este 'for' é um loop "infinito" controlado internamente por 'break'.
    // Ele continuará executando até que a condição de saída seja atingida.
    for (int i = 1; ; i++) {
        // Fase 1: Movimentos para cima.
        // Enquanto o contador de passos para cima for menor que o necessário...
        if (contador_cima < passos_cima) {
            printf("Movimento: Cima\n");
            contador_cima++;
            // 'continue' pula para a próxima iteração do loop, ignorando o código abaixo.
            // Isso garante que só faremos movimentos para cima até completar os 2 passos.
            continue;
        }

        // Fase 2: Movimentos para a direita.
        // Este bloco só é alcançado após o 'if' acima se tornar falso.
        if (contador_direita < passos_direita) {
            printf("Movimento: Direita\n");
            contador_direita++;
        }

        // Condição de Saída:
        // Quando ambos os contadores atingirem seus objetivos, o movimento "L" está completo.
        if (contador_cima == passos_cima && contador_direita == passos_direita) {
            // 'break' encerra o loop permanentemente.
            break;
        }
    }
}

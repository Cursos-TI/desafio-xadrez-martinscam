#include <stdio.h>

// Função recursiva para o movimento da TORRE
void moverTorre(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// Função recursiva + loops aninhados para o BISPO
void moverBispo(int casasRestantes) {
    if (casasRestantes <= 0) return;

    // Loop externo: representa o movimento vertical (subida)
    for (int movimentoVertical = 0; movimentoVertical < 1; movimentoVertical++) {
        // Loop interno: representa o movimento horizontal (direita)
        for (int movimentoHorizontal = 0; movimentoHorizontal < 1; movimentoHorizontal++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(casasRestantes - 1);
}

// Função recursiva para o movimento da RAINHA
void moverRainha(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

int main() {
    // ===================== TORRE ============================
    int movimentoTorre = 5;
    printf("Movimento da TORRE:\n");
    moverTorre(movimentoTorre);
    printf("\n");

    // ===================== BISPO ============================
    int movimentoBispo = 5;
    printf("Movimento do BISPO:\n");
    moverBispo(movimentoBispo);
    printf("\n");

    // ===================== RAINHA ===========================
    int movimentoRainha = 8;
    printf("Movimento da RAINHA:\n");
    moverRainha(movimentoRainha);
    printf("\n");

    // ===================== CAVALO ===========================
    /*
     * Movimento em "L": 2 casas para cima e 1 para a direita
     * Usando loops aninhados, múltiplas variáveis, break e continue
    */
    int movimentosCavalo = 2; // Quantas vezes o "L" será feito
    printf("Movimento do CAVALO:\n");

    for (int repeticaoMovimentoL = 0; repeticaoMovimentoL < movimentosCavalo; repeticaoMovimentoL++) {
        int totalPassos = 0;

        for (int passoVertical = 0; passoVertical < 3; passoVertical++) {
            if (passoVertical < 2) {
                printf("Cima\n");
                totalPassos++;
            } else {
                for (int passoHorizontal = 0; passoHorizontal < 2; passoHorizontal++) {
                    if (passoHorizontal == 0) {
                        printf("Direita\n");
                        totalPassos++;
                    } else {
                        // Ignora movimentos extras, se houver
                        continue;
                    }

                    if (totalPassos >= 3) break; // Evita excesso de movimentos
                }
            }

            if (totalPassos >= 3) break; // Sai do laço externo também
        }
    }

    printf("\n");

    return 0;
}
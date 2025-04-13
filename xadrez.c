#include <stdio.h>

int main() {
    // Movimento da TORRE: 5 casas para a direita, usando for
    int movimentoTorre = 5;
    printf("Movimento da TORRE:\n");
    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimento do BISPO: 5 casas na diagonal para cima e à direita, usando while
    int movimentoBispo = 5;
    int casasBispo = 0; //usado para indicar quantas casas o bispo já andou
    printf("Movimento do BISPO:\n");
    while (casasBispo < movimentoBispo) {
        printf("Cima Direita\n");
        casasBispo++; //indica que o bispo andou mais uma casa
    }
    printf("\n");

    // Movimento da RAINHA: 8 casas para a esquerda, usando do-while
    int movimentoRainha = 8;
    int casasRainha = 0; //contagem de casas que a rainha já andou
    printf("Movimento da RAINHA:\n");
    do { //iniciando a repetição
        printf("Esquerda\n"); //mostra que ela se moveu para a esquerda
        casasRainha++; //aumento das casas que a rainha andou
    } while (casasRainha < movimentoRainha); //fim do laço
    printf("\n");

    // Movimento do CAVALO: 2 casas para baixo e 1 para a esquerda, usando loops aninhados
    int movimentosCavalo = 1; // quantas vezes o movimento "L" será repetido
    printf("Movimento do CAVALO:\n");

    for (int i = 0; i < movimentosCavalo; i++) {
        // Primeiro: mover 2 vezes para baixo
        int passosBaixo = 0;
        while (passosBaixo < 2) {
            printf("Baixo\n");
            passosBaixo++;
        }

        // Depois: mover 1 vez para a esquerda
        printf("Esquerda\n");
    }

    printf("\n");

    return 0;
}


#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
int main() {
    int casas = 0; //contador de casas movidas
    int totalCasas = 5; //total de casas a serem movidas

    //Movendo o bispo para Cima Direita
    while (casas < totalCasas) {
        printf("Bispo: Cima Direita\n"); //Direçao do movimento
        casas++; // Incrementa o contador de casas
    }

    int casas1 = 0; // contador de casas movidas
    int totalCasas1 = 5; // Total de casas a serem movidas

    do {
        printf("Torre: Direita\n"); //Direçao do movimento 
        casas1++; //incrementa o contador de casas
    } while (casas1 < totalCasas1); //continua ate mover 5 casas

    
    int casas3 = 0; // contador de casas movidas
    int totalCasas3 = 8; // Total de casas a serem movidas
    
    for (int i = 0; i < totalCasas3; i++) //incrementa o contador de casas
    {
       printf("Rainha: Direita\n"); //Direçao do movimento
    }
    
    
    
    
    
    
    
    return 0;

    

    
}

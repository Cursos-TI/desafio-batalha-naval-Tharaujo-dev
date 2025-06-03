#include <stdio.h>

int main(){
    char linha[10]= {'A', 'B', 'C', 'D','E', 'F', 'G', 'H', 'I', 'J'};
    // 1.Criando o tabuleiro (Matriz 10x10)
    int tabuleiro[10][10];

    printf("\n TABULEIRO BATALHA NAVAL\n ");
    printf("\n");
    // 2. Inicializando a matriz com 0
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }
    
    // 3. Posicionando navio horizontal: linha 3 (índice 2), colunas D(3), E(4), F(5)
    for (int i = 3; i <= 5; i++){
        tabuleiro[2][i] = 3;
    }

    // 4 Posicionando navio vertical: coluna H (7), linhas 6(5), 7(6), 8(7)
    for (int i = 5; i <= 7; i++){
        tabuleiro[i][7] = 3;
    }

    // 5. Imprimindo o tabuleiro
    printf("  ");
    for (int i = 0; i < 10; i++){
        printf(" %c", linha[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++){
        printf("%2d", i + 1);
        for (int j = 0; j < 10; j++){
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
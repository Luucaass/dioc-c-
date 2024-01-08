#include <stdio.h>

#define BOARD_SIZE 8

char board[BOARD_SIZE][BOARD_SIZE] = {
    {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
    {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
    {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}
};

void printBoard() {
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

// Função para mover uma peça
void movePiece(int startRow, int startCol, int endRow, int endCol) {
    char piece = board[startRow][startCol];
    board[startRow][startCol] = ' ';
    board[endRow][endCol] = piece;
}

int main() {
    printBoard();

    // Exemplo de movimento de peça (mover peão da linha 2 para a linha 4)
    movePiece(1, 0, 3, 0);

    printf("\nApós mover o peão:\n");
    printBoard();

    // Aqui você pode adicionar mais lógica para movimentar as peças, verificar movimentos válidos, etc.

    return 0;
}

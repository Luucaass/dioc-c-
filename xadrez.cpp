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

// Fun��o para mover uma pe�a
void movePiece(int startRow, int startCol, int endRow, int endCol) {
    char piece = board[startRow][startCol];
    board[startRow][startCol] = ' ';
    board[endRow][endCol] = piece;
}

int main() {
    printBoard();

    // Exemplo de movimento de pe�a (mover pe�o da linha 2 para a linha 4)
    movePiece(1, 0, 3, 0);

    printf("\nAp�s mover o pe�o:\n");
    printBoard();

    // Aqui voc� pode adicionar mais l�gica para movimentar as pe�as, verificar movimentos v�lidos, etc.

    return 0;
}

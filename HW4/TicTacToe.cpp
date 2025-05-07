#include <iostream>
#include <cstdio>

using namespace std;

class TicTacToe {
private:
    char board[9]; // 棋盤 0~8 代表位置 1~9
    char currentPlayer; // 'X' 或 'O'
    int moveCount;

public:
    TicTacToe() {
        for (int i = 0; i < 9; ++i)
            board[i] = '1' + i; // 初始為 1~9 字元
        currentPlayer = 'X'; // Player 1 先手
        moveCount = 0;
    }

    void printHeader() {
        printf("-- Tic Tac Toe -- CSIE@CGU\n");
        printf("Player 1 (X) - Player 2 (O)\n");
        printBoard();
    }

    void printBoard() {
        for (int i = 0; i < 9; i += 3) {
            printf(" %c | %c | %c \n", board[i], board[i+1], board[i+2]);
            if (i < 6)
                printf("---+---+---\n");
        }
    }

    bool makeMove(int pos) {
        if (pos < 1 || pos > 9 || board[pos - 1] == 'X' || board[pos - 1] == 'O') {
            printf("==> Invalid value, please enter again\n");
            return false;
        }
        board[pos - 1] = currentPlayer;
        moveCount++;
        return true;
    }

    bool checkWin() {
        int wins[8][3] = {
            {0,1,2},{3,4,5},{6,7,8}, // rows
            {0,3,6},{1,4,7},{2,5,8}, // cols
            {0,4,8},{2,4,6}          // diagonals
        };
        for (auto& line : wins) {
            if (board[line[0]] == currentPlayer &&
                board[line[1]] == currentPlayer &&
                board[line[2]] == currentPlayer) {
                return true;
            }
        }
        return false;
    }

    void switchPlayer() {
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    void playGame() {
        printHeader();
        while (true) {
            printf("==> Player %d (%c), enter a number:", (currentPlayer == 'X') ? 1 : 2, currentPlayer);
            int pos;
            scanf("%d", &pos);
            while (!makeMove(pos)) {
                printf("==> Player %d (%c), enter a number:", (currentPlayer == 'X') ? 1 : 2, currentPlayer);
                scanf("%d", &pos);
            }
            printBoard();
            if (checkWin()) {
                printf("==> Player %d wins!\n", (currentPlayer == 'X') ? 1 : 2);
                break;
            } else if (moveCount == 9) {
                printf("==> Game draw\n");
                break;
            }
            switchPlayer();
        }
    }
};

int main() {
    TicTacToe game;
    game.playGame();
    return 0;
}

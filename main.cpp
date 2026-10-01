#include <iostream>

char board[3][3] = {
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '}
};

int gameCount = 0;

bool row1Col1 = true;
bool row1Col2 = true;
bool row1Col3 = true;
bool row2Col1 = true;
bool row2Col2 = true;
bool row2Col3 = true;
bool row3Col1 = true;
bool row3Col2 = true;
bool row3Col3 = true;


int xRow1Counter = 0;
int xRow2Counter = 0;
int xRow3Counter = 0;
int oRow1Counter = 0;
int oRow2Counter = 0;
int oRow3Counter = 0;
int xCollum1Counter = 0;
int xCollum2Counter = 0;
int xCollum3Counter = 0;
int oCollum1Counter = 0;
int oCollum2Counter = 0;
int oCollum3Counter = 0;
int xDiagonal1Counter = 0;
int xDiagonal2Counter = 0;
int oDiagonal1Counter = 0;
int oDiagonal2Counter = 0;

void printBoard(const char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        std::cout << " " << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << "\n";
        if (i < 2) {
            std::cout << "---+---+---" << "\n";
        }
    }
}

void placePieceX() {
    int coord;
    std::cout << "X's turn" << "\n";
    std::cout << "Type the coordinate where you want to place your piece 1-9" << "\n";
    std::cin >> coord;
    if (coord > 0 && coord < 10) {
        switch (coord) {
            case 1:
                if (row1Col1 == true) {
                    board[0][0] = 'X';
                    xRow1Counter++;
                    xCollum1Counter++;
                    xDiagonal1Counter++;
                    oRow1Counter--;
                    oCollum1Counter--;
                    oDiagonal1Counter--;
                    row1Col1 = false;
                    break;
                }
                else {
                    std::cout << "Invalid move, try again" << "\n";
                    std::cin >> coord;
                }

            case 2:
                if (row1Col2 == true) {
                    board[0][1] = 'X';
                    xRow1Counter++;
                    xCollum2Counter++;
                    oRow1Counter--;
                    oCollum2Counter--;
                    row1Col2 = false;
                    break;
                }
                else {
                    std::cout << "Invalid move, try again" << "\n";
                    std::cin >> coord;
                }

            case 3:
                if (row1Col3 == true) {
                    board[0][2] = 'X';
                    xRow1Counter++;
                    xCollum3Counter++;
                    xDiagonal2Counter++;
                    oRow1Counter--;
                    oCollum3Counter--;
                    oDiagonal2Counter--;
                    row1Col3 = false;
                    break;
                }
                else {
                    std::cout << "Invalid move, try again" << "\n";
                    std::cin >> coord;
                }
            case 4:
                if (row2Col1 == true) {
                    board[1][0] = 'X';
                    xRow2Counter++;
                    xCollum1Counter++;
                    oRow2Counter--;
                    oCollum1Counter--;
                    row2Col1 = false;
                    break;
                }
                else {
                    std::cout << "Invalid move, try again" << "\n";
                    std::cin >> coord;
                }
            case 5:
                if (row2Col2 == true) {
                    board[1][1] = 'X';
                    xRow2Counter++;
                    xCollum2Counter++;
                    xDiagonal1Counter++;
                    xDiagonal2Counter++;
                    oRow2Counter--;
                    oCollum2Counter--;
                    oDiagonal1Counter--;
                    oDiagonal2Counter--;
                    row2Col2 = false;
                    break;
                }
                else {
                    std::cout << "Invalid move, try again" << "\n";
                    std::cin >> coord;
                }
            case 6:
                if (row2Col3 == true) {
                    board[1][2] = 'X';
                    xRow2Counter++;
                    xCollum3Counter++;
                    oRow2Counter--;
                    oCollum3Counter--;
                    row2Col3 = false;
                    break;
                }
                else {
                    std::cout << "Invalid move, try again" << "\n";
                    std::cin >> coord;
                }
            case 7:
                if (row3Col1 == true) {
                    board[2][0] = 'X';
                    xRow3Counter++;
                    xCollum1Counter++;
                    xDiagonal2Counter++;
                    oRow3Counter--;
                    oCollum1Counter--;
                    oDiagonal2Counter--;
                    row3Col1 = false;
                    break;
                }
                else {
                    std::cout << "Invalid move, try again" << "\n";
                    std::cin >> coord;
                }
            case 8:
                if (row3Col2 == true) {
                    board[2][1] = 'X';
                    xRow3Counter++;
                    xCollum2Counter++;
                    oRow3Counter--;
                    oCollum2Counter--;
                    row3Col2 = false;
                    break;
                }
                else {
                    std::cout << "Invalid move, try again" << "\n";
                    std::cin >> coord;
                }

            case 9:
                if(row3Col3 == true) {
                    board[2][2] = 'X';
                    xRow3Counter++;
                    xCollum3Counter++;
                    xDiagonal1Counter++;
                    oRow3Counter--;
                    oCollum3Counter--;
                    oDiagonal1Counter--;
                    row3Col3 = false;
                    break;
                }
                else {
                    std::cout << "Invalid move, try again" << "\n";
                    std::cin >> coord;
                }
        }
    }
    else {
        std::cout << "Invalid input, try again:" << "\n";
        placePieceX();
    }
}

void placePieceO() {
    int coord;
    std::cout << "O's turn" << "\n";
    std::cout << "Type the coordinate where you want to place your piece 1-9" << "\n";
    std::cin >> coord;
    if (coord > 0 && coord < 10) {
        switch (coord) {
            case 1:
                if (row1Col1 == true) {
                    board[0][0] = 'O';
                    xRow1Counter--;
                    xCollum1Counter--;
                    xDiagonal1Counter--;
                    oRow1Counter++;
                    oCollum1Counter++;
                    oDiagonal1Counter++;
                    row1Col1 = false;
                    break;
                }
                else {
                    std::cout << "Invalid move, try again" << "\n";
                    std::cin >> coord;
                }

            case 2:
                if (row1Col2 == true) {
                    board[0][1] = 'O';
                    xRow1Counter--;
                    xCollum2Counter--;
                    oRow1Counter++;
                    oCollum2Counter++;
                    row1Col2 = false;
                    break;
                }
                else {
                    std::cout << "Invalid move, try again" << "\n";
                    std::cin >> coord;
                }

            case 3:
                if (row1Col3 == true) {
                    board[0][2] = 'O';
                    xRow1Counter--;
                    xCollum3Counter--;
                    xDiagonal2Counter--;
                    oRow1Counter++;
                    oCollum3Counter++;
                    oDiagonal2Counter++;
                    row1Col3 = false;
                    break;
                }
                else {
                    std::cout << "Invalid move, try again" << "\n";
                    std::cin >> coord;
                }
            case 4:
                if (row2Col1 == true) {
                    board[1][0] = 'O';
                    xRow2Counter--;
                    xCollum1Counter--;
                    oRow2Counter++;
                    oCollum1Counter++;
                    row2Col1 = false;
                    break;
                }
                else {
                    std::cout << "Invalid move, try again" << "\n";
                    std::cin >> coord;
                }
            case 5:
                if (row2Col2 == true) {
                    board[1][1] = 'O';
                    xRow2Counter--;
                    xCollum2Counter--;
                    xDiagonal1Counter--;
                    xDiagonal2Counter--;
                    oRow2Counter++;
                    oCollum2Counter++;
                    oDiagonal1Counter++;
                    oDiagonal2Counter++;
                    row2Col2 = false;
                    break;
                }
                else {
                    std::cout << "Invalid move, try again" << "\n";
                    std::cin >> coord;
                }
            case 6:
                if (row2Col3 == true) {
                    board[1][2] = 'O';
                    xRow2Counter--;
                    xCollum3Counter--;
                    oRow2Counter++;
                    oCollum3Counter++;
                    row2Col3 = false;
                    break;
                }
                else {
                    std::cout << "Invalid move, try again" << "\n";
                    std::cin >> coord;
                }
            case 7:
                if (row3Col1 == true) {
                    board[2][0] = 'O';
                    xRow3Counter--;
                    xCollum1Counter--;
                    xDiagonal2Counter--;
                    oRow3Counter++;
                    oCollum1Counter++;
                    oDiagonal2Counter++;
                    row3Col1 = false;
                    break;
                }
                else {
                    std::cout << "Invalid move, try again" << "\n";
                    std::cin >> coord;
                }
            case 8:
                if (row3Col2 == true) {
                    board[2][1] = 'O';
                    xRow3Counter--;
                    xCollum2Counter--;
                    oRow3Counter++;
                    oCollum2Counter++;
                    row3Col2 = false;
                    break;
                }
                else {
                    std::cout << "Invalid move, try again" << "\n";
                    std::cin >> coord;
                }

            case 9:
                if(row3Col3 == true) {
                    board[2][2] = 'O';
                    xRow3Counter--;
                    xCollum3Counter--;
                    xDiagonal1Counter--;
                    oRow3Counter++;
                    oCollum3Counter++;
                    oDiagonal1Counter++;
                    break;
                }
                else {
                    std::cout << "Invalid move, try again" << "\n";
                    std::cin >> coord;
                }
        }
    }
    else {
        std::cout << "Invalid input, try again:" << "\n";
        placePieceX();
    }
}


int main() {
    printBoard(board);
    while (gameCount < 9) {
        placePieceX();
        gameCount++;
        if ((xCollum1Counter == 3) || (xCollum2Counter == 3) || (xCollum3Counter == 3) || (xRow1Counter == 3) || (xRow2Counter == 3) || (xRow3Counter == 3) || (xDiagonal1Counter == 3) || (xDiagonal2Counter == 3)) {
            printBoard(board);
            std::cout << "X wins!" << "\n";
            break;
        }
        if (gameCount == 9) {
            printBoard(board);
            std::cout << "Draw!" << "\n";
            break;
        }
        printBoard(board);
        placePieceO();
        gameCount++;
        if ((oCollum1Counter == 3) || (oCollum2Counter == 3) || (oCollum3Counter == 3) || (oRow1Counter == 3) || (oRow2Counter == 3) || (oRow3Counter == 3) || (oDiagonal1Counter == 3) || (oDiagonal2Counter == 3)) {
            printBoard(board);
            std::cout << "O wins!" << "\n";
            break;
        }
        printBoard(board);
        }
    return 0;
    }

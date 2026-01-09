#include <iostream>
#include <string>

class ChessGame {
    char board[8][8];
    bool whiteTurn = true;

public:
    void initializeBoard(); // Set up starting pieces
    void displayBoard();    // Print grid to terminal
    bool makeMove(std::string move); // Validate and apply "e2e4"
};

int main() {
    ChessGame game;
    game.initializeBoard();
    while (true) {
        game.displayBoard();
        std::string input;
        std::cout << (game.isWhiteTurn() ? "White" : "Black") << " move: ";
        std::cin >> input;
        if (!game.makeMove(input)) std::cout << "Invalid move!\n";
    }
    return 0;
}


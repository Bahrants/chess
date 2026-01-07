#include <iostream>
#include <string>

 //2d array for the 8x8 board
std::string board[8][8] = {
 {"r","n","b","q","k","b","n","r"},
 {"p","p","p","p","p","p","p","p"},
 {" "," "," "," "," "," "," "," "},
 {" "," "," "," "," "," "," "," "},
 {" "," "," "," "," "," "," "," "},
 {" "," "," "," "," "," "," "," "},
 {"P","P","P","P","P","P","P","P"},
 {"R","N","B","Q","K","B","N","R"},
};

    void printBoard() {
        std::cout << "  a b c d e f g h" << std::endl;
        for (int i = 0; i < 8; i++) {
            std::cout << 8 - i << " ";
        for (int j = 0; j < 8; j++) {
            std::cout << board[i][j] << " "; 
        }
    std::cout << 8 - i << std::endl;
    }
    std::cout << "  a b c d e f g h" <<std::endl;
}
int main() { 
    while (true) {
        printBoard();
        std::string move;
        std::cout << "make a move:  ";
        std::cin >> move;
        //i need to add move parsing and validation logic here but idk how for now
    }
    return 0;
}
#include <iostream>
#include "board.hpp"
#include <fstream>
using namespace std;

int main(){
    Board board;
    board.display();
    board.displayWhitePieces();
    board.displayBlackPieces();
    return 0;
}
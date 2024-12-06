#ifndef BOARD_HPP
#define BOARD_HPP
#include "piece.hpp"
#include <vector>
using namespace std;

class Board{
    protected:
        vector<vector<Piece>> boardPieces;

    public:
        Board();
        void displayLetters();
        void turnLetterToPiece(char);
        void display();
};
#endif
#ifndef PIECE_HPP
#define PIECE_HPP

class Piece{
    protected:
        int xCoordinate;
        int yCoordinate;
        char letter;

    public:
        Piece();
        Piece(int x, int y, char l): xCoordinate(x), yCoordinate(y), letter(l)  {};
        int getX();
        int getY();
        void setX(int);
        void setY(int);
        char getLetter();

};

#endif
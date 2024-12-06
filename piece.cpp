#include <iostream>
#include "piece.hpp"
#include <fstream>
using namespace std;

Piece::Piece()  {};

int Piece::getX(){
    return this->xCoordinate;
}

void Piece::setX(int other){
    this->xCoordinate = other;
}

int Piece::getY(){
    return this->yCoordinate;
}

void Piece::setY(int other){
    this->yCoordinate = other;
}

char Piece::getLetter(){
    return this->letter;
}
#include <iostream>
#include <fstream>
#include "board.hpp"
#include <vector>
using namespace std;

Board::Board(){
    boardPieces = vector<vector<Piece>>(7, vector<Piece>(7));
};

void Board::displayLetters(){
    //cout << " |";
    for(int ij = 0; ij < 7; ij++)
        cout << (char)('a' + ij) << "   ";
    cout << endl;
}

void Board::turnLetterToPiece(char c){
    switch (c)
    {
    case 'w':
        cout << "\u26AA";
        break;
    case 'b':
        cout << "\u26AB";
        break;
    default:
        cout << c;
    }
}

void Board::display(){
    int count = 7, counter;
    counter = count;
    for(int i = 0; i < count; i++){
        cout << counter - i << " |";
        for(int j = 0; j < count; j++){
            if(i == 0 || i == 6)
                cout << "---";
            else if((i == 1 || i == 5) && j == 1)
                cout << "|--";
            else if((i == 1 || i == 5) && j == 5)
                cout << "--|";
            else if((i == 1 || i == 5) && (j >= 1 && j <= 5))
                cout << "---";
            else if((i == 1 || i == 5) && !((j >= 1 && j <= 5)))
                cout << "   ";
            else if(j == 1 && (i >= 1 && i <= 5))
                cout << "|  ";
            else if(j == 5 && (i >= 1 && i <= 5))
                cout << "  |";
            else if((i == 2 || i == 4) && (j >= 2 && j <= 4))
                cout << "---";
            else if((i > 2 && i < 4) && j == 2)
                cout << "|  ";
            else if((i > 2 && i < 4) && j == 4)
                cout << "  |";
            else if(i == 2 && j == 2)
                cout << "|--";
            else
                cout << "   ";
        }
        cout << "|\n";
    }
    displayLetters();
}
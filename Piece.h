#ifndef PIECE_H
#define PIECE_H

#include <string>
using namespace std;

// UI Colors
#define RESET       "\033[0m"
#define BOLD        "\033[1m"
#define WHITE_PIECE "\033[97m"
#define BLACK_PIECE "\033[30m"
#define BG_LIGHT    "\033[48;5;250m" 
#define BG_DARK     "\033[48;5;240m" 
#define ERROR_COLOR "\033[1;31m"
#define TURN_BOX    "\033[48;5;33m"

class Piece {
protected:
    bool white;
public:
    Piece(bool w) : white(w) {}
    virtual string getIcon() const = 0;
    bool isWhite() const { return white; }
    virtual ~Piece() {}
};

class Pawn : public Piece { public: Pawn(bool w) : Piece(w) {} string getIcon() const override { return white ? " ♙ " : " ♟ "; } };
class Rook : public Piece { public: Rook(bool w) : Piece(w) {} string getIcon() const override { return white ? " ♖ " : " ♜ "; } };
class Knight : public Piece { public: Knight(bool w) : Piece(w) {} string getIcon() const override { return white ? " ♘ " : " ♞ "; } };
class Bishop : public Piece { public: Bishop(bool w) : Piece(w) {} string getIcon() const override { return white ? " ♗ " : " ♝ "; } };
class Queen : public Piece { public: Queen(bool w) : Piece(w) {} string getIcon() const override { return white ? " ♕ " : " ♛ "; } };
class King : public Piece { public: King(bool w) : Piece(w) {} string getIcon() const override { return white ? " ♔ " : " ♚ "; } };

#endif

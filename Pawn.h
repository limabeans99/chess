#ifndef PAWN_H
#define PAWN_H

#include "Piece.h"

class Pawn : public Piece
{
public:
	bool legal_move_shape( std::pair< char , char > start , std::pair< char , char > end ) const;

	bool legal_capture_shape( std::pair< char , char > start , std::pair< char , char > end ) const {
                return legal_move_shape(start, end);
        }

        ~Pawn() { }	
	/////////////////////////////////////
	// DO NOT MODIFY THIS FUNCTION!!!! //
	/////////////////////////////////////
	char to_ascii( void ) const { return is_white() ? 'P' : 'p'; }


private:
	/////////////////////////////////////
	// DO NOT MODIFY THIS FUNCTION!!!! //
	/////////////////////////////////////
	Pawn( bool is_white ) : Piece( is_white ) {}

	friend Piece* create_piece( char );
};

#endif // PAWN_H
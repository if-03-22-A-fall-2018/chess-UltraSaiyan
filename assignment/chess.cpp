/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2AHDV
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			chess.c
 * Author:			P. Bauer
 * Due Date:		November 03, 2010
 * ----------------------------------------------------------
 * Description:
 * Implementation of basic chess functions.
 * ----------------------------------------------------------
 */
 #include "chess.h"
#include <stdio.h>



int nf	(	File 	file	 )
{
  return file;
}


int nr	(	Rank 	rank	 )
{
  return rank;
}

bool 	is_square_ok (File file, Rank rank)
{
   if((file>='a'&& file<='h')&& (rank>=1 && rank<=8))
   {
     return true;
   }

   return false;
}

 bool 	is_piece (struct ChessPiece pc, enum PieceColor color, enum PieceType type)
 {
   return pc.color == color && pc.type == type;
 }

 void 	init_chess_board (ChessBoard chess_board)
 {
     for(int i = 0; i< 8;i++)
     {
       for(int x = 0; x < 8;x++)
       {
         chess_board[i][x]. is_occupied= false;
       }
     }
 }
 struct ChessSquare * 	get_square (ChessBoard chess_board, File file, Rank rank)
 {
   if(is_square_ok(file, rank))
   {
     return &chess_board[rank - 1][file - 'a'];
   }

    else
    {
      return 0;
    }
 }

 bool 	is_square_occupied (ChessBoard chess_board, File file, Rank rank)
 {
   if(chess_board[file-'a'][rank-1].is_occupied==true)
   {
     return true;
   }

   return false;
 }

 bool 	add_piece (ChessBoard chess_board, File file, Rank rank, struct ChessPiece piece)
 {
   return false;
 }

 struct ChessPiece 	get_piece (ChessBoard chess_board, File file, Rank rank)
 {
   struct ChessPiece to_be_returned;
   return to_be_returned;
 }

 void 	setup_chess_board (ChessBoard chess_board)
 {

 }
 bool 	remove_piece (ChessBoard chess_board, File file, Rank rank)
 {
   return false;
 }

 bool 	squares_share_file (File s1_f, Rank s1_r, File s2_f, Rank s2_r)
 {
   return false;
 }

 bool 	squares_share_rank (File s1_f, Rank s1_r, File s2_f, Rank s2_r)
 {
   return false;
 }

 bool 	squares_share_diagonal (File s1_f, Rank s1_r, File s2_f, Rank s2_r)
 {
   return false;
 }

 bool 	squares_share_knights_move (File s1_f, Rank s1_r, File s2_f, Rank s2_r)
 {
   return false;
 }

 bool 	squares_share_pawns_move (enum PieceColor color, enum MoveType move, File s1_f, Rank s1_r, File s2_f, Rank s2_r)
 {
   return false;
 }

 bool 	squares_share_queens_move (File s1_f, Rank s1_r, File s2_f, Rank s2_r)
 {
   return false;
 }

 bool 	squares_share_kings_move (File s1_f, Rank s1_r, File s2_f, Rank s2_r)
 {
   return false;
 }

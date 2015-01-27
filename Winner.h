// GROUP 1
// Author: Berthony Lozier, Katherine Sandoval, Oluomachukwu Agwai, Gerardine Houngbedji, Mohammed Islam, Naafia Khan. 
// Contact: berthonylozier@yahoo.com, kate_sandoval27@hotmail.com, oluomachukwu.agwai@live.lagcc.cuny.edu, nady1224@yahoo.fr, 
//		    mohammed.islam@live.lagcc.cuny.edu, naafia.khan@live.lagcc.cuny.edu
// Date:12/16/2013
// Description: Tic Tac Toe Game, user versus computer. It uses a multi-file program, 
//				and uses classes for the Tic-Tac-Toe game. Version 3.0
// Copyright 2013 GROUP 1. All rights reserved.

#ifndef ISWINNER_H
#define ISWINNER_H
#include "TTT.h"
#include <cstdlib>
#include <ctime>

/* This class holds the major logic and win parameters */ 
class Winner
{
	public:
		static int isWinner(char position[row][column]);
		char difficult_cpu_logic(char position[row][column]);
		void easy_cpu_logic(char position[row][column], char playermove, int TotalMoves);
		static void whoWon();
};

#endif 

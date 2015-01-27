// GROUP 1
// Author: Berthony Lozier, Katherine Sandoval, Oluomachukwu Agwai, Gerardine Houngbedji, Mohammed Islam, Naafia Khan. 
// Contact: berthonylozier@yahoo.com, kate_sandoval27@hotmail.com, oluomachukwu.agwai@live.lagcc.cuny.edu, nady1224@yahoo.fr, 
//		    mohammed.islam@live.lagcc.cuny.edu, naafia.khan@live.lagcc.cuny.edu
// Date:12/16/2013
// Description: Tic Tac Toe Game, user versus computer. It uses a multi-file program, 
//				and uses classes for the Tic-Tac-Toe game.  Version 3.0
// Copyright 2013 GROUP 1. All rights reserved.

#ifndef GAME_H
#define GAME_H

#include <iostream>
#include "windows.h"
#include <thread>
using namespace std;

/* Global Variables declaration */ 
const int row = 3;
const int column = 3;
extern char position[row][column];
extern char computerMove;
extern char playermove;
extern int cpuDifficulty;

/* This class deals with important background content */
class TTT
{
	private:
		void music();
	
	public:
		TTT(){ thread t1 ( &TTT::music, this ); t1.detach(); };
		static void display(char position[row][column]);
		void showRules();
		void reset(char position[row][column]);
		static void searchmove(char playermove, char position[row][column],char cputest);
		void setwindow();
};

#endif
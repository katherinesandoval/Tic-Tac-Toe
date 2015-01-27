// GROUP 1
// Author: Berthony Lozier, Katherine Sandoval, Oluomachukwu Agwai, Gerardine Houngbedji, Mohammed Islam, Naafia Khan. 
// Contact: berthonylozier@yahoo.com, kate_sandoval27@hotmail.com, oluomachukwu.agwai@live.lagcc.cuny.edu, nady1224@yahoo.fr, 
//		    mohammed.islam@live.lagcc.cuny.edu, naafia.khan@live.lagcc.cuny.edu
// Date:12/16/2013
// Description: Tic Tac Toe Game, user versus computer. It uses a multi-file program, 
//				and uses classes for the Tic-Tac-Toe game.  Version 3.0
// Copyright 2013 GROUP 1. All rights reserved.

  
#include "TTT.h"
#include "Winner.h"
#include <cctype>

char position[row][column];			// Array for quadrents
char computerMove = NULL;			// Computer move default to null
char playermove;					// User input	
int cpuDifficulty;					// Picks which difficulty to play
int answer = 1;						// Variable for playing again		

// Defining classes
Winner win; 
TTT play;

int main()
{
	play.setwindow();

	do{
		play.reset(position);	// Initialize the quadrant
		play.showRules();		// Show rules
		
		cout << "What difficulty do you want to play? (Easy = 0, Difficult = 1)" << endl;
		cin >> cpuDifficulty;
		
		while(cpuDifficulty < 0 || cpuDifficulty > 1) // Checks for right input
		{
			cout << "Re-Enter" << endl;
			cin >> cpuDifficulty;
		}

		int TotalMoves = 0; // Initialize total possible moves 
		 
		while(win.isWinner(position) == 0 && TotalMoves <= 4)
		{
			play.display(position); // Displays the actual game

			cout << "Enter the quadrent number you want to choose: \n";
			cin >> playermove;
		
			// Checks for wrong input
			while(!isdigit(playermove))
			{
				cout << "Invalid number, Choose a valid number between 1 and 9" << endl;
				cin >> playermove;
			}

			play.searchmove(playermove, position, NULL); // Takes player input into the array 
			Sleep(500);									 // Delay

			win.easy_cpu_logic(position, playermove, TotalMoves);	 // Computer logic (moves)
		
			TotalMoves++;								 // Increment
		} // end game loop
	
		win.whoWon();									 // checks who won

		// Play again 
		computerMove = NULL;							 // reset computer move
		cout << "\nDo you want to continue?" << endl;
		cout << "YES = 1, NO = 0" << endl;
		cin >> answer;
		
		if(answer == 0)
			exit(0);
	
	}while(answer >= 1);

	return 0;
} // end main

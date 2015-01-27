// GROUP 1
// Author: Berthony Lozier, Katherine Sandoval, Oluomachukwu Agwai, Gerardine Houngbedji, Mohammed Islam, Naafia Khan. 
// Contact: berthonylozier@yahoo.com, kate_sandoval27@hotmail.com, oluomachukwu.agwai@live.lagcc.cuny.edu, nady1224@yahoo.fr, 
//		    mohammed.islam@live.lagcc.cuny.edu, naafia.khan@live.lagcc.cuny.edu
// Date:12/16/2013
// Description: Tic Tac Toe Game, user versus computer. It uses a multi-file program, 
//				and uses classes for the Tic-Tac-Toe game.  Version 3.0
// Copyright 2013 GROUP 1. All rights reserved.

#include "TTT.h"
using namespace std;

int viewRules = 0;

/* This function displays the TTT board */
void TTT::display(char position[row][column])
{
	system("cls");
	cout << "     |     |     " << endl;
	cout << "  " << position[0][0] << "  |  " << position[0][1] << "  |  " << position[0][2] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << position[1][0] << "  |  " << position[1][1] << "  |  " << position[1][2] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << position[2][0] << "  |  " << position[2][1] << "  |  " << position[2][2] << endl;

	cout << "     |     |     " << endl << endl;
	
	if(computerMove != NULL) // Display computer and player move
	{
		cout << "You moved to: " << playermove << endl;
		cout << "Computer moves to: " << computerMove << endl;
	}
};

/* This function shows the rules of the game */
void TTT::showRules()
{
	int seeRules = 0;
	system("cls");
	
	if(viewRules > 0)
	{
		cout << "Do you want to see the rules? If (Yes = 1 No = 0)" << endl;
		cin >> seeRules;

		if(seeRules == 1)
			viewRules = 0;
		else
			cout << "Good Luck!\n" << endl;
	}
	
	if(viewRules == 0)
	{
		cout << "Welcome to the Tic Tac Toe Game! \n" << endl;
		cout << "In order to play, pick the corresponding quadrent number. \n" << endl;
		cout << "ENTER NUMBERS ONLY FROM 1 TO 9! \n" << endl;
		cout << "You are the first to go.  You will play as X \n" << endl;
		cout << "Good Luck!!!!!!!! \n" << endl;
	}
	
	viewRules++;
};

/* This function initializes the starting numbers in the quadrants */ 
void TTT::reset(char position[row][column])
{
	position[0][0]= '1';
	position[0][1]= '2';
	position[0][2]= '3';
	position[1][0]= '4';
	position[1][1]= '5';
	position[1][2]= '6';
	position[2][0]= '7';
	position[2][1]= '8';
	position[2][2]= '9';
};

/* This function places player's input into quadrants */ 
void TTT::searchmove(char playermove, char position[row][column],char cputest)
{
	int verify = 0; // variable to verify if same move was made
	
	// Looks through the two dimentional array
	for(int Z = 0; ; Z++)
	{
		for(int i = 0; i < 3; i++)
		{
			for(int t = 0; t < 3; t++)
			{
				if(position[i][t] == cputest)
				{
					position[i][t] = 'O';
					verify++;
				}
				if(position[i][t] == playermove)
				{
					position[i][t] = 'X';
					verify++;
				}
			}
		} 

		if(verify == 0)			// To not allow the same position to be played
		{
			cout << "The quadrant is already taken.  Re-enter: " << endl;
			cin >> playermove;
		}
		else
			break;
	}
};

/* This function sets the console window and text color*/ 
void TTT::setwindow()
{
	SMALL_RECT windowSize = {0, 0, 200, 200};  
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleWindowInfo(hConsole, TRUE, &windowSize);
	SetConsoleTitle(TEXT("Tic Tac Toe"));
	system("color 02");
};

/* This function plays the Super Mario theme song*/ 
void TTT::music()
{
	while(true)
	{
		Beep(480,200);
		Beep(1568,200);
		Beep(1568,200);
		Beep(1568,200);
		Beep(739.99,200);
		Beep(783.99,200);
		Beep(783.99,200);
		Beep(783.99,200);
		Beep(369.99,200);
		Beep(392,200);
		Beep(369.99,200);
		Beep(392,200);
		Beep(392,400);
		Beep(196,400);
		Beep(739.99,200);
		Beep(783.99,200);
		Beep(783.99,200);
		Beep(739.99,200);
		Beep(783.99,200);
		Beep(783.99,200);
		Beep(739.99,200);
		Beep(83.99,200);
		Beep(880,200);
		Beep(830.61,200);
		Beep(880,200);
		Beep(987.77,400);
		Beep(880,200);
		Beep(783.99,200);
		Beep(698.46,200);
		Beep(739.99,200);
		Beep(783.99,200);
		Beep(783.99,200);
		Beep(739.99,200);
		Beep(783.99,200);
		Beep(783.99,200);
		Beep(739.99,200);
		Beep(783.99,200);
		Beep(880,200);
		Beep(830.61,200);
		Beep(880,200);
		Beep(987.77,400);
		Sleep(200);
		Beep(1108,10);
		Beep(1174.7,200);
		Beep(1480,10);
		Beep(1568,200);
		Sleep(200);
		Beep(739.99,200);
		Beep(783.99,200);
		Beep(783.99,200);
		Beep(739.99,200);
		Beep(783.99,200);
		Beep(783.99,200);
		Beep(739.99,200);
		Beep(783.99,200);
		Beep(880,200);
		Beep(830.61,200);
		Beep(880,200);
		Beep(987.77,400);
		Beep(880,200);
		Beep(783.99,200);
		Beep(698.46,200);
		Beep(659.25,200);
		Beep(698.46,200);
		Beep(784,200);
		Beep(880,400);
		Beep(784,200);
		Beep(698.46,200);
		Beep(659.25,200);
		Beep(587.33,200);
		Beep(659.25,200);
		Beep(698.46,200);
		Beep(784,400);
		Beep(698.46,200);
		Beep(659.25,200);
		Beep(587.33,200);
		Beep(523.25,200);
		Beep(587.33,200);
		Beep(659.25,200);
		Beep(698.46,400);
		Beep(659.25,200);
		Beep(587.33,200);
		Beep(493.88,200);
		Beep(523.25,200);
		Sleep(400);
		Beep(349.23,400);
		Beep(392,200);
		Beep(329.63,200);
		Beep(523.25,200);
		Beep(493.88,200);
		Beep(466.16,200);
		Beep(440,200);
		Beep(493.88,200);
		Beep(523.25,200);
		Beep(880,200);
		Beep(493.88,200);
		Beep(880,200);
		Beep(1760,200);
		Beep(440,200);
		Beep(392,200);
		Beep(440,200);
		Beep(493.88,200);
		Beep(783.99,200);
		Beep(440, 200);
		Beep(783.99,200);
		Beep(1568,200);
		Beep(392,200);
		Beep(349.23,200);
		Beep(392,200);
		Beep(440,200);
		Beep(698.46,200);
		Beep(415.2,200);
		Beep(698.46,200);
		Beep(1396.92,200);
		Beep(349.23,200);
		Beep(329.63,200);
		Beep(311.13,200);
		Beep(329.63,200);
		Beep(659.25,200);
		Beep(698.46,400);
		Beep(783.99,400);
		Beep(440,200);
		Beep(493.88,200);
		Beep(523.25,200);
		Beep(880,200);
		Beep(493.88,200);
		Beep(880,200);
		Beep(1760,200);
		Beep(440,200);
		Beep(392,200);
		Beep(440,200);
		Beep(493.88,200);
		Beep(783.99,200);
		Beep(440,200);
		Beep(783.99,200);
		Beep(1568,200);
		Beep(392,200);
		Beep(349.23,200);
		Beep(392,200);
		Beep(440,00);
		Beep(698.46,200);
		Beep(659.25,200);
		Beep(698.46,200);
		Beep(739.99,200);
		Beep(783.99,200);
		Beep(392,200);
		Beep(392,200);
		Beep(392,200);
		Beep(392,200);
		Beep(196,200);
		Beep(196,200);
		Beep(196,200);
		Beep(185,200);
		Beep(196,200);
		Beep(185,200);
		Beep(196,200);
		Beep(207.65,200);
		Beep(220,200);
		Beep(233.08,200);
		Beep(246.94,200);
	}
};


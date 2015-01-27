// GROUP 1
// Author: Berthony Lozier, Katherine Sandoval, Oluomachukwu Agwai, Gerardine Houngbedji, Mohammed Islam, Naafia Khan. 
// Contact: berthonylozier@yahoo.com, kate_sandoval27@hotmail.com, oluomachukwu.agwai@live.lagcc.cuny.edu, nady1224@yahoo.fr, 
//		    mohammed.islam@live.lagcc.cuny.edu, naafia.khan@live.lagcc.cuny.edu
// Date:12/16/2013
// Description: Tic Tac Toe Game, user versus computer. It uses a multi-file program, 
//				and uses classes for the Tic-Tac-Toe game.  Version 3.0
// Copyright 2013 GROUP 1. All rights reserved.

#include "Winner.h"
using namespace std;

const int playerwon = 1;
const int cpuwon = 2;
const int draw = 0;

/* This function determines who is a winner; if user or computer */
int Winner::isWinner(char position[row][column]) 
{
    if (position[0][0] == position[0][1] && position[0][1] == position[0][2]) // top row 
	{ 
        if (position[0][0] == 'X') // if user wins 
			return playerwon;	
		else			//if computer wins
			return cpuwon;	
    }

    if (position[1][0] == position[1][1] && position[1][1] == position[1][2]) //middle row
	{ 
        if (position[1][0] == 'X') // if user wins 
            return playerwon;	
        else			// if computer wins
            return cpuwon;	
        
	}
    
	if (position[2][0] == position[2][1] && position[2][1] == position[2][2]) //bottom row
	{
        if (position[2][0] == 'X') // if user wins 
            return playerwon;	
        else			// if computer wins
            return cpuwon;	
        
	}
    
	if (position[0][0] == position[1][0] && position[1][0] == position[2][0]) // left vertical
	{
       if (position[0][0] == 'X') // if user wins
            return playerwon;	
       else				// if computer wins
            return cpuwon;	
    }
    
	if (position[0][1] == position[1][1] && position[1][1] == position[2][1]) // middle vertical
	{
        if (position[0][1] == 'X') //if user wins
            return playerwon;	
        else			// if computer wins
            return cpuwon;	
         
	}
    
	if (position[0][2] == position[1][2] && position[1][2] == position[2][2]) // right vertical
	{
        if (position[0][2] == 'X') //if user wins
            return playermove;	
        else			// if computer wins
            return cpuwon;	
    }
    
	if (position[0][0] == position[1][1] && position[1][1] == position[2][2]) // top left to bottom right
	{
        if (position[0][0] == 'X') //if user wins
            return playerwon;	
        else			// if computer wins
            return cpuwon;	
    }
    
	if (position[2][0] == position[1][1] && position[1][1] == position[0][2]) // top right to bottom left
	{
        if (position[2][0] == 'X') //if user wins
           return playerwon;	
        else			// if computer wins
            return cpuwon;	
    }

    return draw; // if neither computer nor player wins
};

/* This function plays advance computer's logic */
char Winner::difficult_cpu_logic(char position[row][column]) 
{
	char pos = NULL;

	if (position[1][1] != 'X' && position[1][1] != 'O'){  // Place advantageous move
		pos = position[1][1];
		return pos;
	}
    
	if (position[0][0] == position[0][1])   // Top left, top middle 
		if (position[0][0] == 'O' || position[0][0] == 'X') 
			if(position[0][2] != 'X' && position[0][2] != 'O')
			{
			  pos = position[0][2]; 
			  return pos;
			} 
		
	if (position[0][2] == position[0][1])  // Top middle, top right
		if (position[0][2] == 'O'|| position[0][2] =='X' ) 
			if(position[0][0] != 'X' && position[0][0] != 'O')
			{
			  pos = position[0][0];
			  return pos;	
			}
		
    if (position[0][0] == position[0][2])  // Top left, top right
		if (position[0][0] == 'O' || position[0][0] == 'X')
			if(position[0][1] != 'X' && position[0][1] != 'O')
			{
			  pos = position[0][1];
			  return pos;	
			}
	
	if (position[1][0] == position[1][1])  // Middle left, middle middle
       if (position[1][0] ==  'O'|| position[1][0] == 'X') 
           if(position[1][2] != 'X' && position[1][2] != 'O')
			{
			  pos = position[1][2];
			  return pos;
			}
		
    if (position[1][1] == position[1][2]) // Middle middle, middle right
		if (position[1][1] == 'O' || position[1][1] == 'X') 
          if(position[1][0] != 'X' && position[1][0] != 'O')
			{
			  pos = position[1][0];
			  return pos;	
		    }
	

	if (position[1][0] == position[1][2]) // Middle left, middle right
		if (position[1][0] == 'O'|| position[1][0] == 'X') 
			if(position[1][1] != 'X' && position[1][1] != 'O')
			{
			  pos = position[1][1];
			  return pos;	
			}
	
    
	if (position[2][0] == position[2][1]) // Bottom left, middle bottom
		if (position[2][0] == 'O'|| position[2][0] =='X' ) 
			if(position[2][2] != 'X' && position[2][2] != 'O')
			{
			  pos = position[2][2];
			  return pos;	
			}
	
	if (position[2][0] == position[2][2]) // Bottom left, bottom right
		if (position[2][0] == 'O'|| position[2][0] == 'X') 
			if(position[2][1] != 'X' && position[2][1] != 'O')
			{
			  pos = position[2][1];
			  return pos;	
			}
	
    if (position[2][2] == position[2][1]) // Bottom middle, bottom right
		if (position[2][2] == 'O'|| position[2][2] == 'X') 
			if(position[2][0] != 'X' && position[2][0] != 'O')
			{
			  pos = position[2][0];
			  return pos;	
			}   
	
	if (position[1][0] == position[2][0]) // Left bottom, left middle
		if (position[1][0] == 'O' || position[1][0] == 'X')
			if(position[0][0] != 'X' && position[0][0] != 'O')
			{
			  pos = position[0][0];
			  return pos;	
			}
	
	if (position[0][0] == position[2][0]) // Top left, bottom left
		if (position[0][0] =='O' || position[0][0] == 'X') 
			if(position[1][0] != 'X' && position[1][0] != 'O')
			{
			  pos = position[1][0];
			  return pos;	
			}
	
	if (position[0][0] == position[1][0]) // Top left, middle left
		if (position[0][0] == 'O'|| position[0][0] == 'X') 
			if(position[2][0] != 'X' && position[2][0] != 'O')
			{
			  pos = position[2][0];
			  return pos;	
			}
	
	if (position[0][1] == position[1][1]) // Middle top, middle middle
		if (position[0][1] =='O' || position[0][1] == 'X')
			if(position[2][1] != 'X' && position[2][1] != 'O')
			{
			  pos = position[2][1];
			  return pos;	
			}
		
	if (position[0][1] == position[2][1]) // Top middle, bottom middle
		if (position[0][1] == 'O'|| position[0][1] == 'X') 
			if(position[1][1] != 'X' && position[1][1] != 'O')
			{
			  pos = position[1][1];
			  return pos;	
			}
	
	if (position[1][1] == position[2][1]) // Middle middle, bottom middle
		if (position[1][1] == 'O'|| position[1][1] == 'X') 
			if(position[0][1] != 'X' && position[0][1] != 'O')
			{
			  pos = position[0][1];
			  return pos;	
			}
	
	if (position[0][2] == position[1][2]) // Top right, middle right
		if (position[0][2] == 'O' || position[0][2] == 'X') 
			if(position[2][2] != 'X' && position[2][2] != 'O')
			{
				pos = position[2][2];
				return pos;	
			}
	
	if (position[0][2] == position[2][2]) // Top right, bottom right
		if (position[0][2] == 'O'|| position[0][2] == 'X') 
			if(position[1][2] != 'X' && position[1][2] != 'O')
			{
			  pos = position[1][2];
			  return pos;	
			}
			
	if (position[1][2] == position[2][2]) // Middle right, bottom right
		if (position[1][2] == 'O'|| position[1][2] == 'X')
			if(position[0][2] != 'X' && position[0][2] != 'O')
			{
			  pos = position[0][2];
			  return pos;	
			}
	
	if (position[0][0] == position[1][1]) // Top left, middle middle
		if (position[0][0] == 'O'|| position[0][0] == 'X') 
			if(position[2][2] != 'X' && position[2][2] != 'O')
			{
			  pos = position[2][2];
			  return pos;	
			}
	
	if (position[0][0] == position[2][2]) // Top left, bottom right
		if (position[0][0] == 'O'|| position[0][0] == 'X') 
			if(position[1][1] != 'X' && position[1][1] != 'O')
			{
			  pos = position[1][1];
			  return pos;	
			}
	
	if (position[1][1] == position[2][2]) // Middle middle, bottom right
		if (position[1][1] == 'O' || position[1][1] == 'X') 
			if(position[0][0] != 'X' && position[0][0] != 'O')
			{
			  pos = position[0][0];
			  return pos;	
			}
	
    if (position[0][2] == position[1][1]) // Top right, middle middle
		if (position[0][2] == 'O' || position[0][2] == 'X') 
			if(position[2][0] != 'X' && position[2][0] != 'O')
			{
			  pos = position[2][0];
			  return pos;	
			}
	
	if (position[0][2] == position[2][0]) // Top right, bottom left
		if (position[0][2] == 'O'|| position[0][2] == 'X') 
			if(position[1][1] != 'X' && position[1][1] != 'O')
			{
			  pos = position[1][1];
			  return pos;	
			}
	
    if (position[1][1] == position[2][0]) // Middle middle, bottom left 
		if (position[1][1] == 'O'|| position[1][1] == 'X') 
			if(position[0][2] != 'X' && position[0][2] != 'O')
			{
			  pos = position[0][2];
			  return pos;
			}
	
	return pos;
};


/* This function is the computer logic and easy mode */ 
void Winner::easy_cpu_logic(char position[row][column], char playermove, int TotalMoves)
{
	srand (time(NULL)); // seed for random number generator

    int x, cont;
	bool found = false;
  
	while(found == false)
    {
		if(Winner::isWinner(position) != 0 || TotalMoves == 4)
		{
			found = true;
		}
		
		if(cpuDifficulty == 1)
		{
			computerMove = Winner::difficult_cpu_logic(position);
	
			if(isdigit(computerMove))
			{
				TTT::searchmove(NULL,position,computerMove);
				break;
			}
		}
		
		x = rand() % 9 + 1; 
		cont = 1;
        
		for(int i = 0; i < 3; i++ )
        {
            for(int j = 0; j < 3; j++ )
            {
                if(cont == x)
                {
                    if(position[i][j] != 'X' && position[i][j] != 'O')
                    {
						computerMove = position[i][j]; 
                        position[i][j] = 'O';
                        found = true;
                    }
                }
				cont++;
			} // end of inner for
		} // end of outer for
	} // end while
};

/* This function determines who is the winner */ 
void Winner::whoWon()
{
	// Checks who won
	if(Winner::isWinner(position) == 1)
	{
		TTT::display(position);
		cout << "Congratulations You Won!!" <<endl;
	}
	else if(Winner::isWinner(position) == 2)
	{
		TTT::display(position);
		cout << "You LOSE, Keep trying!" <<endl;
	}
	else
	{
		TTT::display(position);
		cout << "Game Is A Draw" << endl;
	}
};
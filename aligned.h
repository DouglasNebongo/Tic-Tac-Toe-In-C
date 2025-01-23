#define ROWS 3
#define COLS 3
#include<stdbool.h>

typedef char TBoard[ROWS][COLS];

// ****************************************************************************
// Sub Program: is_aligned
// Purpose: Verifies if the discs of a player are aligned Vertically, horizontally,
// or diagonally. Return true if the discs are aligned and false otherwise
//
// ****************************************************************************
bool is_aligned(TBoard tab)
{
	int row, col, aligned = false;

	//Horizontal check (along the rows)
	for(row = 0; row < ROWS; row++)
	{
		    col = 0;
			if (tab[row][col] != ' ' && tab[row][col] == tab[row][col+1] && tab[row][col] == tab[row][col+2])
			{
				aligned = true;
			}
	}

	//Vertical check (along the columns)
	for(col = 0; col < COLS; col++)
	{
		    row = 0;
			if (tab[row][col] != ' ' && tab[row][col] == tab[row+1][col] && tab[row][col] == tab[row+2][col])
			{
				aligned = true;
			}
	}

	//Leading diagonal check (top left corner to bottom right corner)
    row = 0;
	col = 0;
	if (tab[row][col] != ' ' && tab[row][col] == tab[row+1][col+1] && tab[row][col] == tab[row+2][col+2])
	{
		aligned = true;
	}
	//Counter diagonal check (top right corner to bottom left corner
    row = 0;
	col = 2;
	if (tab[row][col] != ' ' && tab[row][col] == tab[row+1][col-1] && tab[row][col] == tab[row+2][col-2])
	{
		aligned = true;
	}

	return aligned;
}

// ****************************************************************************
// Sub Program: empty_grid
// Purpose: Sets the grid cells to empty.
// ****************************************************************************
void empty_grid(TBoard tab){		//Subprogram to empty the grid
	for(int i = 0; i< ROWS; i++)
	{
		for(int j = 0; j < COLS; j++)
		{
			tab[i][j]=' ';
		}
	}
}



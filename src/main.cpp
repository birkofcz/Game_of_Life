/**************************************************************************** */
/*                                                                   _        */
/*  Project: Game of Life simulation                             ___| |__     */
/*  Author: Stepan Benes <stepan.benes@gmail.com>               / __| '_ \    */
/*                                                              \__ \ |_) |   */
/*  Created: 2023/11/18                                         |___/_.__/    */
/*  Updated:                                                                  */
/* ************************************************************************** */

/* Game of Life */

#include "../include/general.hpp"

/* int main(int argc, char *argv[])
{
	return 0;
} */

void	printGrid(vector<vector<bool>> grid)
{
	usleep(300000);
	system("clear");

	unsigned long i, j;
	
	for (i = 0; i < grid.size(); ++i) 
	{
		for (j = 0; j < grid[i].size(); ++j) 
		{
			if (grid[i][j] == false)
				cout << " " << " ";
			else
				cout << "+" << " ";
		}
		cout << endl;
	}
}

void   setGrid(vector<vector<bool>> &grid)
{
	/* int x, y = 0;

	bool above = grid[x-1][y];
	bool below = grid[x+1][y];
	bool left = grid[x][y-1];
	bool right = grid[x][y+1];
 */
	
	grid[0][0] = true;
	grid[0][49] = true;
	grid[49][0] = true;
	grid[49][49] = true;
}


int main() {
    const int gridSize = 50;
    // Create a 6x6 grid of '0' characters
    vector<vector<bool>> grid(gridSize, vector<bool>(gridSize, false));

    printGrid(grid);
	setGrid(grid);
	cout << endl;
	printGrid(grid);

    return 0;
}
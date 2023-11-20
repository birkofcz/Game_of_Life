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

/* Stringstream version - better on output quality */
void printGrid(const vector<vector<bool>> &grid)
{
	usleep(100000); // Sleep for 100 milliseconds

	// Move the cursor to the top left corner of the terminal
	system("clear");
	cout << "\033[H";

	// Print the title
	cout << "----------------" << endl;
	cout << GREEN << "  GAME OF LIFE" << RESET << endl;
	cout << "----------------" << endl;
	cout << endl;

	stringstream ss;

	// Print top border
	ss << "+";
	for (unsigned long j = 0; j < grid[0].size(); ++j)
		ss << "--";
	ss << "+" << endl;

	// Print grid with side borders
	for (unsigned long i = 0; i < grid.size(); ++i)
	{
		ss << "|"; // Left border
		for (unsigned long j = 0; j < grid[i].size(); ++j)
			ss << (grid[i][j] ? "# " : "  ");
		ss << "|" << endl; // Right border
	}

	// Print bottom border
	ss << "+";
	for (unsigned long j = 0; j < grid[0].size(); ++j)
		ss << "--";
	ss << "+" << endl;

	// Print the entire frame
	cout << ss.str();
}

int checkNeighbours(const vector<vector<bool>> &grid, int x, int y)
{
	/* 
		Cell has 8 neighbours that we need to check 

		1 2 3
		8 C 4
		7 6 5

		Also, we need to check if the cell is on the edge of the grid.
		For this, we will set some logical variables checking that:

		- the cell is not on the first line - line_above
		- the cell is not on the last line 	 line_below
		- the cell is not on the first column - column_left
		- the cell is not on the last column - column_right
		
	*/
	bool line_above = x > 0;
	bool line_below = x < (int)(grid.size() - 1);
	bool column_left = y > 0;
	bool column_right = y < (int)(grid.size() - 1);

	int count = 0;

	// Check each neighbor with boundary checks
	if (line_above && column_left && grid[x-1][y-1]) // 1
		count++;
	if (line_above && grid[x-1][y]) // 2
		count++;
	if (line_above && column_right && grid[x-1][y+1]) // 3
		count++;
	if (column_right && grid[x][y+1]) // 4
		count++;
	if (line_below && column_right && grid[x+1][y+1]) // 5
		count++;
	if (line_below && grid[x+1][y]) // 6
		count++;
	if (line_below && column_left && grid[x+1][y-1]) // 7
		count++;
	if (column_left && grid[x][y-1]) // 8
		count++;

	return count;
}


void	setGrid(vector<vector<bool>> &grid)
{
	vector<vector<bool>> temp_grid = grid;
	int x, y;
	

	for (x = 0; x < (int)grid.size(); ++x) 
	{
		for (y = 0; y < (int)grid[x].size(); ++y) 
		{
			int count = checkNeighbours(grid, x, y);
			if (count < 2 || count > 3)
				temp_grid[x][y] = false;
			else if (count == 3)
				temp_grid[x][y] = true;

		}
	}
	grid = temp_grid;
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		string configuration(av[1]);
		int generations = atoi(av[2]);
		const int grid_size = 40;

		vector<string> configurations = {"glider", "frog", "gun", "five"};

		if (find(configurations.begin(), configurations.end(), configuration) == configurations.end())
		{
			cout << RED << "Invalid configuration. Available configurations: glider, frog, gun" << RESET << endl;
			return 1;
		}

		vector<vector<bool>> grid(grid_size, vector<bool>(grid_size, false));

		if (configuration == "glider")
			init_glider(grid);
		else if (configuration == "frog")
			init_frog(grid);
		else if (configuration == "gun")
			init_gun(grid);
		else if (configuration == "five")
			init_fiveonfive(grid);


		int cycles = 0;
		while (cycles++ < generations)
		{
			printGrid(grid);
			setGrid(grid);
			cout << endl << "Generation: " << cycles << endl;
		}
		cout << endl << GREEN << "Simulation finished." << RESET << endl << endl;
		
	}
	else
	{
		cout << RED << "Invalid number of arguments. Usage: ./game_of_life <configuration> <generations>" << RESET << endl;
		return 1;
	}

	return 0;
}

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

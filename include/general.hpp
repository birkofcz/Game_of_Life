/* Basic header file with basic level definitions and includes */

#ifndef GENERAL_HPP
# define GENERAL_HPP

#include <iostream>
#include <string>
#include <vector>
#include <unistd.h>
#include <sstream>
#include <algorithm>

//namespace snippets to use
using std::cout;
using std::cerr;
using std::endl;
using std::string;
using std::vector;
using std::stringstream;

//colors
#define RED		"\033[31m"
#define GREEN	"\033[32m"
#define YELLOW	"\033[33m"
#define BLUE	"\033[34m"
#define RESET	"\033[0m"
#define NONE	""

/* -----  Functions  ----- */

/* configurations.cpp */
void	init_fiveonfive(vector<vector<bool>> &grid);
void	init_gun(vector<vector<bool>> &grid);
void	init_glider(vector<vector<bool>> &grid);
void	init_toad(vector<vector<bool>> &grid);

/* grid.cpp */
void	printGrid(const vector<vector<bool>> &grid);
int		checkNeighbours(const vector<vector<bool>> &grid, int x, int y);
void	setGrid(vector<vector<bool>> &grid);

#endif
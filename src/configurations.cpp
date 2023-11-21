#include "../include/general.hpp"

void init_fiveonfive(vector<vector<bool>> &grid)
{
	grid[17][17] = true;
	grid[17][18] = true;
	grid[17][19] = true;
	grid[17][20] = true;
	grid[17][21] = true;

	grid[18][17] = true;
	grid[18][18] = true;
	grid[18][19] = true;
	grid[18][20] = true;
	grid[18][21] = true;

	grid[19][17] = true;
	grid[19][18] = true;
	grid[19][19] = true;
	grid[19][20] = true;
	grid[19][21] = true;

	grid[20][17] = true;
	grid[20][18] = true;
	grid[20][19] = true;
	grid[20][20] = true;
	grid[20][21] = true;

	grid[21][17] = true;
	grid[21][18] = true;
	grid[21][19] = true;
	grid[21][20] = true;
	grid[21][21] = true;

}

void init_gun(vector<vector<bool>> &grid)
{

	grid[4][1] = true;
	grid[5][1] = true;
	grid[4][2] = true;
	grid[5][2] = true;

	grid[4][11] = true;
	grid[5][11] = true;
	grid[6][11] = true;

	grid[3][12] = true;
	grid[7][12] = true;

	grid[2][13] = true;
	grid[8][13] = true;

	grid[2][14] = true;
	grid[8][14] = true;

	grid[5][15] = true;

	grid[3][16] = true;
	grid[7][16] = true;

	grid[4][17] = true;
	grid[5][17] = true;
	grid[6][17] = true;

	grid[5][18] = true;

	grid[2][21] = true;
	grid[3][21] = true;
	grid[4][21] = true;

	grid[2][22] = true;
	grid[3][22] = true;
	grid[4][22] = true;

	grid[1][23] = true;
	grid[5][23] = true;

	grid[0][25] = true;
	grid[1][25] = true;
	grid[5][25] = true;
	grid[6][25] = true;

	grid[2][35] = true;
	grid[3][35] = true;
	grid[2][36] = true;
	grid[3][36] = true;
}


void init_glider(vector<vector<bool>> &grid)
{
	grid[1][2] = true;
	grid[2][3] = true;
	grid[3][1] = true;
	grid[3][2] = true;
	grid[3][3] = true;
}

void	init_toad(vector<vector<bool>> &grid)
{
	grid[1][4] = true;
	grid[2][2] = true;
	grid[2][5] = true;
	grid[3][2] = true;
	grid[3][5] = true;
	grid[4][3] = true;
}


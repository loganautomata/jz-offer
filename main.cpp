#include <iostream>
#include <sstream>
#include <string>
#include "jz04.h"

using namespace std;

int main()
{
	Jz04 solution;

	vector<vector <int>> matrix = {
		// {1,   4,  7, 11, 15},
		// {2,   5,  8, 12, 19},
		// {3,   6,  9, 16, 22},
		// {10, 13, 14, 17, 24},
		// {18, 21, 23, 26, 30}
		{1, 1}
	};

	cout << solution.findNumberIn2DArray(matrix, 1) << endl << solution.findNumberIn2DArray(matrix, 2) << endl;

	return 0;
}
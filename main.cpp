#include <iostream>
#include <sstream>
#include <math.h>
#include "lc912.h"

using namespace std;

int main()
{
	LC912 solution;

	vector<int> arr = {4, 8, 6, 12, 16, 14, 10};

	for (auto i : solution.sortArray(arr))
	{
		cout << i << "  ";
	}

	cout << endl;

	return 0;
}
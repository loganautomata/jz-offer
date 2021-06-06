#include <iostream>
#include <sstream>
#include <math.h>
#include "jz33.h"

using namespace std;

int main()
{
	Jz33 solution;

	vector<int> arr = {4, 8, 6, 12, 16, 14, 10};

	cout << solution.verifyPostorder(arr) << endl;

	return 0;
}
#include <iostream>
#include <sstream>
#include <math.h>
#include "jz60.h"

using namespace std;

int main()
{
	Jz60 solution;

	for (auto num : solution.dicesProbability(2))
	{
		cout << num << ' ';
	}
	cout << endl;

	return 0;
}
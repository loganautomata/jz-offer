#include <iostream>
#include <sstream>
#include <math.h>
#include "jz37.h"

using namespace std;

int main()
{
	Jz37 solution;

	string input = "1 2 3 " + to_string(INT64_MIN) + ' ' + to_string(INT64_MIN) + " " + "4 5 ";
	cout << solution.serialize(solution.deserialize(input)) << endl;

	return 0;
}
//chap2ex8.cpp
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int sum = 1;
	for (int i=1;  i < 10; i++) {
		sum = sum * i;
	}
	cout << sum << endl;
}
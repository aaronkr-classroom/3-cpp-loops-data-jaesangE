//chap2ex9.cpp
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{	
	int a, b;
	cout << "두개의 숫자를 입력해 주세요: ";
	cin >> a >> b;
	cout << "둘중에 더 큰 수: " << (a > b ? a : b) << endl;
}

//chap2ex2
//chap2ex0.cpp
#include <iostream>
#include <string>
//표준 라이브러리에서 가져와서 사용할 이름을 언급
using std::cin; using std::endl;
using std::cout; using std::string;

int main()
{
	cout << "Please enter your first name: ";

	string name;
	cin >> name;

	const string greeting = "Hello, " + name + "!";

	const int pad = 5; //pad의 값을 바꾸어 상하좌우의 공백크기를 다르게한다.

	const int rows = pad * 2 + 3;
	const string::size_type cols = greeting.size() + pad * 2 + 2;
	// Kim 입력시 greeting.size()=11
	cout << endl;

	for (int r = 0; r != rows; ++r) {
		string::size_type c = 0;

		while (c != cols) {
			if (r == pad + 1 && c == pad + 1) {
				cout << greeting;
				c += greeting.size();
			}
			else {
				if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
					cout << "*";
				}
				else {
					cout << " ";
				}
				++c;
			} // if-else 끝
		}//while 끝
		cout << endl;
	}//for 끝
	return 0;
}// main 끝
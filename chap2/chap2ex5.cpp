//chap2ex5.cpp
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
int main()
{

	cout << "도형의 크기를 입력해주세요 : ";
	int size;
	cin >> size;
	cout << endl;
	cout << "정사각형 \n\n";

	
	for (int r = 0; r != size; ++r) {
		int c = 0;

		while (c != size) {
			
			
			if (r == 0 || r == size - 1 || c == 0 || c == size - 1) {
				cout << "* ";
			}
			else {
				cout << "  ";
				}
				++c;
		} // if-else 끝
		cout << endl;
	}//while 끝
	cout << "직사각형"<<endl;
	
	for (int r = 0; r != 2*size+1; ++r) {
		int c = 0;

		while (c != size) {


			if (r == 0 || r == 2*size  || c == 0 || c == size - 1) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
			++c;
		} // if-else 끝
		cout << endl;
	}//while 끝
	cout << "삼각형" << endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int j = 0; j < (2 * size) - 1 - (i * 2); j++) {
			cout << "*";

		}
		cout << endl;
	}
	
	
}
//chap2ex5.cpp
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
int main()
{

	cout << "������ ũ�⸦ �Է����ּ��� : ";
	int size;
	cin >> size;
	cout << endl;
	cout << "���簢�� \n\n";

	
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
		} // if-else ��
		cout << endl;
	}//while ��
	cout << "���簢��"<<endl;
	
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
		} // if-else ��
		cout << endl;
	}//while ��
	cout << "�ﰢ��" << endl;
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
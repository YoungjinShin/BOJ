#include <iostream>
#include <string>

using namespace std;

int main() {
	string a, b;
	cin >> a >> b;
	
	// a, b�� ������
	string ra = "";
	string rb = "";
	
	// �ڸ� ��
	const int FIGURES = 3;
	
	for(int i=0; i<FIGURES; i++) {
		ra = ra + a.at(FIGURES-i-1);
		rb = rb + b.at(FIGURES-i-1);
	}
	// ra, rb�� int�� 
	int ia = stoi(ra);
	int ib = stoi(rb);
	
	cout << ((ia > ib) ? ia : ib);
	return 0;
}

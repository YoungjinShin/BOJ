#include <iostream>
#include <string>

using namespace std;

int main() {
	string a, b;
	cin >> a >> b;
	
	// a, b의 리버스
	string ra = "";
	string rb = "";
	
	// 자리 수
	const int FIGURES = 3;
	
	for(int i=0; i<FIGURES; i++) {
		ra = ra + a.at(FIGURES-i-1);
		rb = rb + b.at(FIGURES-i-1);
	}
	// ra, rb의 int형 
	int ia = stoi(ra);
	int ib = stoi(rb);
	
	cout << ((ia > ib) ? ia : ib);
	return 0;
}

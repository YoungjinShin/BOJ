#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	for(int a=n; a>0; a--) {
		for(int b=0; b<a; b++) {
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}

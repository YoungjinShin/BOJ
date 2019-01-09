#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int sum, book;
	cin >> sum;
	
	for(int i=0; i<9; i++) {
		cin >> book;
		sum -= book;
	}
	
	cout << sum << "\n";
	
	return 0;
}

#include <iostream>

using namespace std;

int main() {
	int x;
	int sum = 0; // 막대의 개수 
	cin >> x;
	
	// 2진법에서 1의 개수 
	while (x > 0) {
		if (x % 2 == 1) sum = sum + 1;
		x = x / 2;
	}
	cout << sum;
	return 0;
}

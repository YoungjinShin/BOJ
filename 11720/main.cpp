#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	string number;
	cin >> n >> number;
	
	int sum = 0;
	for(int i=0; i<n; i++) {
		sum = sum + stoi(number.substr(n-i-1, 1));
	}
	
	cout << sum;
	return 0;
}

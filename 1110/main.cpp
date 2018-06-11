#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	int temp = (((n/10) + (n%10)) % 10) + ((n%10)*10);
	int cycle = 1;
	
	while(temp != n) {
		temp = (((temp/10) + (temp%10)) % 10) + ((temp%10)*10);
		cycle = cycle + 1;
	}
	cout << cycle;	
	return 0;
}

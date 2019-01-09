#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int A, B, C;
	cin >> A >> B >> C;
	
	B += C;
	A += B / 60;
	B = B % 60;
	A = A % 24;
	
	cout << A << " " << B << "\n";
	
	return 0;
}

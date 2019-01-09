#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	unsigned long long N;
	cin >> N;
	
	cout << (N-1)*N*(N+1)/2 << "\n";
	return 0;
}

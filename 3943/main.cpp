#include <iostream>

using namespace std;

bool is_odd(int n) {
	return n%2;
}

int odd(int n) {
	return n*3+1;
}

int even(int n) {
	return n/2;
}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int T, n, max;
	
	cin >> T;
	
	for (int t=0; t<T; t++) {
		cin >> n;
		max = n;
		while(n!=1) {
			n = is_odd(n) ? odd(n) : even(n);
			if(n>max) max=n;
		}
		cout << max << "\n";
	}
	return 0;
}

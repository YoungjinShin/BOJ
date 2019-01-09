#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int T;
	int N, M;
	
	cin >> T;
	
	for(int t=0; t<T; t++) {
		cin >> N >> M;
		if(N > M - N)
			N = M - N;
		
		unsigned long long son = 1;
		unsigned long long mom = 1;
		for(int i=0; i<N; i++) {
			son *= M-i;
			mom *= 1+i;
		}
		cout << son / mom << "\n";
	}
	return 0;
}

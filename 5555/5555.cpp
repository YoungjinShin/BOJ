#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int N;
	string sub;
	string ring;
	int result = 0;
	
	cin >> sub >> N;
	
	for(int i=0; i<N; i++) {
		cin >> ring;
		if ((ring+ring).find(sub) != -1)
			result++;
	}
	cout << result;
	return 0;
}

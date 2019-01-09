#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int N;
	vector<int> A, B;
	int input;
	cin >> N;
	
	for (int i=0; i<N; i++) {
		cin >> input;
		A.push_back(input);
	}
	
	for (int i=0; i<N; i++) {
		cin >> input;
		B.push_back(input);
	}
	
	sort(A.begin(), A.end());
	sort(B.begin(), B.end(), greater<int>());
	
	int result = 0;
	
	for (int i=0; i<N; i++)
		result += A[i] * B[i];
	
	cout << result << "\n";
	return 0;
}

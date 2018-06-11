#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int m;
	int n;
	
	cin >> m >> n;
	
	int sum = 0; // 완전제곱수들의 합 
	int min = (int)sqrt(m); // 최소값의 제곱근 
	int max = (int)sqrt(n); // 최대값의 제곱근 
	
	if(pow(min, 2) < m) min = min + 1;
	
	for (int i=min; i<=max; i++)
		sum = sum + pow(i, 2);
		
	if (sum == 0)
		cout << -1;
	
	else
		cout << sum << "\n" << pow(min, 2);
	
	return 0;
}

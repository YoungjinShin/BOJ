#include <iostream>

using namespace std;

int main() {
	int in[4]; // 각 역별 탄 사람들 
	int out[4]; // 각 역별 내린 사람들 
	int sum = 0; // 열차 내 잔여 인원 
	int max = 0; // 최대 인원 수 
	
	for (int i=0; i<4; i++) {
		cin >> out[i] >> in[i];
		sum = sum - out[i] + in[i];
		if (sum > max) max = sum;
	}
	cout << max;
	
	return 0;
}

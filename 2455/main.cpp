#include <iostream>

using namespace std;

int main() {
	int in[4]; // �� ���� ź ����� 
	int out[4]; // �� ���� ���� ����� 
	int sum = 0; // ���� �� �ܿ� �ο� 
	int max = 0; // �ִ� �ο� �� 
	
	for (int i=0; i<4; i++) {
		cin >> out[i] >> in[i];
		sum = sum - out[i] + in[i];
		if (sum > max) max = sum;
	}
	cout << max;
	
	return 0;
}

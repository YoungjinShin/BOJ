#include <iostream>

using namespace std;

int main() {
	int c;
	cin >> c;
	for(int i=0; i<c; i++) {
		int n;
		cin >> n;
		
		double arr[1000];
		double sum = 0;
		
		for(int j=0; j<n; j++) {
			cin >> arr[j];
			sum = sum + arr[j];
		}
		
		double average = sum / n;
		int n_up = 0; // 평균 넘는 학생 수
		 
		for(int j=0; j<n; j++) {
			if(arr[j] > average) n_up = n_up + 1;
		}
		
		cout << fixed;
		cout.precision(3);
		cout << ((double)n_up / n) * 100 << "%\n";
		
	}
	return 0;
}

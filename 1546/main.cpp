#include <iostream>

using namespace std;

int main() {
	double arr[1000];
	int n;
	int m = 0;
	double sum = 0;
	
	cin >> n;
	
	for(int i=0; i<n; i++) {
		cin >> arr[i];
		if(arr[i] > m) m = arr[i];
	}
	
	for(int i=0; i<n; i++) {
		arr[i] = arr[i] / m * 100;
		sum = sum + arr[i];
	}
	
	double average = sum / n;
	
	cout.precision(2);
	cout << fixed;
	cout << average;
	
	return 0;
}

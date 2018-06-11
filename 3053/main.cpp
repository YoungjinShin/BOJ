#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;

int main() {
	double radius;
	cin >> radius;
	
	double radius2 = pow(radius, 2); // 반지름 제곱 
	cout << fixed;
	cout.precision(6);
	cout << radius2 * M_PI << "\n";
	cout << radius2 * 2;
	
	return 0;
}

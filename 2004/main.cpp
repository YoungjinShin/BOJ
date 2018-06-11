#include <iostream>

using namespace std;

int calc(int num, int prime); // num! 을 소인수분해 시, 소수인 prime의 지수를 구하는 함수 

int main() {
	int n;
	int m;
	cin >> n >> m;
	
	// nCm = n! / ( (n-m)! * m! ) 계산 값을, 
	int two = calc(n, 2) - calc(n-m, 2) - calc(m, 2); // 소인수분해 시, 2가 몇 번 들어갔는지를 나타내는 변수 
	int five = calc(n, 5) - calc(n-m, 5) - calc(m, 5); // 소인수분해 시, 5가 몇 번 들어갔는지를 나타내는 변수 
	
	cout << ((two >= five) ? five : two);
	return 0;
}

int calc(int num, int prime) {
	int result = 0;
	
	for (long long i=prime; i<=num; i=i*prime)
		result = result + (num / i);
		
	return result;
}

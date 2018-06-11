#include <iostream>

using namespace std;

int calc(int num, int prime); // num! �� ���μ����� ��, �Ҽ��� prime�� ������ ���ϴ� �Լ� 

int main() {
	int n;
	int m;
	cin >> n >> m;
	
	// nCm = n! / ( (n-m)! * m! ) ��� ����, 
	int two = calc(n, 2) - calc(n-m, 2) - calc(m, 2); // ���μ����� ��, 2�� �� �� �������� ��Ÿ���� ���� 
	int five = calc(n, 5) - calc(n-m, 5) - calc(m, 5); // ���μ����� ��, 5�� �� �� �������� ��Ÿ���� ���� 
	
	cout << ((two >= five) ? five : two);
	return 0;
}

int calc(int num, int prime) {
	int result = 0;
	
	for (long long i=prime; i<=num; i=i*prime)
		result = result + (num / i);
		
	return result;
}

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n; // ���� Ǯ�̿��� �Ⱦ�������, �ϴ� �Է��� �޾ƾ� �ϹǷ�... 
	int r; // �� 
	int c; // �� 
	
	cin >> n >> r >> c;
	
	int result = 0; // �� ��°�� �湮�ϴ��� �� (�����) 
	
	// ��, �� ���� 2�������� ��ȯ ��, �����ϰ� ��� (���� ���� �ּ��� ����) 
	for (int i=0; c>0; i=i+2) {
		result = result + (c % 2) * pow(2, i);
		c = c / 2;
	}
	
	for (int i=1; r>0; i=i+2) {
		result = result + (r % 2) * pow(2, i);
		r = r / 2;
	}
	
	cout << result;
	
	return 0;
}

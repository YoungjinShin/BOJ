#include <iostream>

using namespace std;

int main() {
	int son = 1; // ����
	int mom = 1; // �и�
	bool changed = false; // �и�, ���ڰ� 1�� �� �̵��ߴ��� ���� 
	bool sm = false; // �������� ����üũ. ����=true, �и�=false
	int x;
	
	cin >> x;
	
	for (int i=1; i<x; i++) {
		if (!changed) {
			if (son == 1)
				mom = mom + 1;
				
			else if (mom == 1)
				son = son + 1;
				
			changed = true;
			sm = !sm;
		}
		else {
			if (sm) {
				son = son + 1;
				mom = mom - 1;
			}
			else {
				son = son - 1;
				mom = mom + 1;
			}
			if (son == 1 || mom == 1)
				changed = false;
		}
	}
	cout << son << "/" << mom;
	return 0;
}

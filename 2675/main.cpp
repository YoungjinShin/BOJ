#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	// �׽�Ʈ ���̽� 
	for (int i=0; i<t; i++) {
		int r;
		string s;
		cin >> r >> s;
		
		// ���� ���̸�ŭ 
		for (int j=0; j<s.length(); j++) {
			// ���� �ݺ� 
			for (int k=0; k<r; k++) {
				cout << s.substr(j,1);
			}
		}
		cout << "\n";
	}
	
	return 0;
}

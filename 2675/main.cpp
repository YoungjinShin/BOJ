#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	// 테스트 케이스 
	for (int i=0; i<t; i++) {
		int r;
		string s;
		cin >> r >> s;
		
		// 글자 길이만큼 
		for (int j=0; j<s.length(); j++) {
			// 글자 반복 
			for (int k=0; k<r; k++) {
				cout << s.substr(j,1);
			}
		}
		cout << "\n";
	}
	
	return 0;
}

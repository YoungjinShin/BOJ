#include <iostream>

using namespace std;

int main() {
	char result[5] = {'E', 'A', 'B', 'C', 'D'}; // 윷 결과 
	
	for (int n=0; n<3; n++) {
		int yoot[4]; // 윷들의 상태 (0, 1)
		int sum = 0; // 0의 총 개수 
		
		for (int i=0; i<4; i++) {
			cin >> yoot[i];
			if (yoot[i] == 0) sum = sum + 1;
		}
		
		cout << result[sum] << "\n";
	}
	return 0;
}

#include <iostream>

using namespace std;

int main() {
	int cup[3] = {1, 0, 0}; // 컵의 상태. 공이 들어있으면 1, 아니면 0 
	int m;
	cin >> m;
	
	for(int i=0; i<m; i++) {
		int x;
		int y;
		cin >> x >> y;
		
		if(x == y) continue;
		
		if(cup[x-1] == 1) {
			cup[x-1] = 0;
			cup[y-1] = 1;
		}
		else if(cup[y-1] == 1) {
			cup[y-1] = 0;
			cup[x-1] = 1;
		}
		
	}
	
	for(int i=0; i<3; i++)
		if(cup[i] == 1) cout << i + 1;
	
	return 0;
}

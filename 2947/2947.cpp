#include <iostream>

using namespace std;

void print(int wood[]) {
	for(int i=0; i<5; i++)
		cout << wood[i] << " ";
		
	cout << "\n";
}
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int wood[5];
	int temp;
	bool loop;
	
	for(int i=0; i<5; i++)
		cin >> wood[i];
	do {	
		for(int i=0; i<4; i++) {
			if(wood[i] > wood[i+1]) {
				temp = wood[i];
				wood[i] = wood[i+1];
				wood[i+1] = temp;
				print(wood);
			}
		}
		loop = false;
		for(int i=0; i<5; i++) {
			if(wood[i] != i+1) {
				loop = true;
				break;
			}
		}
	} while(loop);
	return 0;
}

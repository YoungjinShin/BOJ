#include <iostream>

using namespace std;

int main() {
	int son = 1; // 분자
	int mom = 1; // 분모
	bool changed = false; // 분모, 분자가 1일 때 이동했는지 여부 
	bool sm = false; // 상행중인 변수체크. 분자=true, 분모=false
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

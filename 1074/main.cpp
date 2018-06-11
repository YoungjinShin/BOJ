#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n; // 본인 풀이에선 안쓰이지만, 일단 입력을 받아야 하므로... 
	int r; // 행 
	int c; // 열 
	
	cin >> n >> r >> c;
	
	int result = 0; // 몇 번째로 방문하는지 값 (결과값) 
	
	// 행, 열 값을 2진법으로 변환 후, 적절하게 계산 (계산식 관련 주석은 생략) 
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

#include <iostream>

using namespace std;

int main() {
	string day[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
	
	int x, y;
	int daynum = 0; // 1월 1일로부터 몇번째 날인지 (1월 1일이 1)
	cin >> x >> y;
	
	for (int i=1; i<x; i++) {
		if(i == 4 || i == 6 || i == 9 || i == 11)
			daynum = daynum + 30;
			
		else if(i == 2)
			daynum = daynum + 28;
			
		else
			daynum = daynum + 31;
	}
	
	daynum = daynum + y;
	
	cout << day[daynum%7];
	
	return 0;
}

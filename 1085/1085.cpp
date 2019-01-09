#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	
	int x_diff = (x < (w - x) ? x : (w - x));
	int y_diff = (y < (h - y) ? y : (h - y));
	
	cout << ((x_diff < y_diff) ? x_diff : y_diff);
	
	return 0;
}

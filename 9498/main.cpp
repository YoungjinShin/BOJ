#include <iostream>
#include <string>

using namespace std;

int main() {
	int score;
	string rank;
	
	cin >> score;
	
	if(90 <= score && score <= 100) rank = "A";
	else if(80 <= score && score <= 89) rank = "B";
	else if(70 <= score && score <= 79) rank = "C";
	else if(60 <= score && score <= 69) rank = "D";
	else rank = "F";
	
	cout << rank;
	
	
	return 0;
}

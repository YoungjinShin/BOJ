#include <iostream>

using namespace std;

int main() {
    int count[10] = {0,};
    int A, B, C;
    cin >> A >> B >> C;
    unsigned long long result = A * B * C;
    while(result != 0) {
        count[result % 10]++;
        result /= 10;
    }
    
    for (int i=0; i<10; i++)
        cout << count[i] << "\n";

    return 0;
}
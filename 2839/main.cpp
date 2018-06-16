#include <iostream>

using namespace std;

int count(int N) {
    int three, five;

    for (five = N/5; five >= 0; five--) {
        if ((N - (five * 5)) % 3 == 0) {
            three = (N - (five * 5)) / 3;
            return three + five;
        }
    }
    return -1;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int N;
    
    cin >> N;

    cout << count(N);
    return 0;
}
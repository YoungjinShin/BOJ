#include <iostream>

using namespace std;

void result(int N, int L) {
    for (int n = L; n <= 100; n++) {
        int temp = (n * (n - 1)) / 2;
        if (temp > N) break;
        if ((N - temp) % n == 0) {
            int add = (N - temp) / n;
            for(int i = 0; i < n; i++)
                cout << i + add << " ";
            return;
        }
    }
    cout << -1;
}

int main() {
    int N, L;

    cin >> N >> L;
    result(N, L);

    return 0;
}
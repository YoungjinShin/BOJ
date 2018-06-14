#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int T, H, W, N;
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> H >> W >> N;
        cout << ((((N-1) % H) + 1) * 100) + (((N-1) / H) + 1) << "\n";
    }
    return 0;
}
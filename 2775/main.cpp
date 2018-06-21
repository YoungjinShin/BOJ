#include <iostream>
#include <vector>

using namespace std;

int member(int k, int n) {
    vector<vector<int> > apartment;

    vector<int> baseFloor;

    for (int j = 0; j < n; j++)
        baseFloor.push_back(j + 1);

    apartment.push_back(baseFloor);

    for (int i = 1; i <= k; i++) {
        vector<int> floor(n, 0);
        apartment.push_back(floor);
    }

    for (int i = 1; i <= k; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k <= j; k++)
                apartment[i][j] += apartment[i-1][k];

    return apartment[k][n-1];
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int T;
    
    cin >> T;

    for(int i = 0; i < T; i++) {
        int k, n; // k : 층, n : 호
        cin >> k >> n;
        cout << member(k, n) << "\n";
    }
    return 0;
}
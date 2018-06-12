#include <iostream>
#include <vector>

using namespace std;

bool isHansoo(int n) {
    if (n / 100 == 0)
        return true;

    vector<int> soo;
    
    while(n != 0) {
        soo.push_back(n % 10);
        n /= 10;
    }
    
    int diff = soo[0] - soo[1];

    for (int i=2; i<soo.size(); i++) {
        if (soo[i-1] - soo[i] != diff)
            return false;
    }
    return true;
}

int main() {
    int count = 0;
    int N;
    cin >> N;
    for (int i=1; i<=N; i++) {
        if (isHansoo(i))
            count++;
    }
    cout << count;
    return 0;
}
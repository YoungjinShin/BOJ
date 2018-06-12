#include <iostream>
#include <string>

using namespace std;

int score(string ox) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int result = 0;
    int temp = 0;
    for(int i=0; i<ox.length(); i++) {
        string iox = ox.substr(i,1);
        if (iox == "O")
            result += ++temp;
        else
            temp = 0;
    }
    return result;
}
int main() {
    int T;
    string ox;
    cin >> T;
    for (int i=0; i<T; i++) {
        cin >> ox;
        cout << score(ox) << "\n";
    }
    return 0;
}
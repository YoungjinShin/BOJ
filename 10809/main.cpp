#include <iostream>
#include <string>

using namespace std;

int main() {
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    string S;
    cin >> S;

    for (int i=0; i<alphabet.length(); i++)
        cout << (int) S.find(alphabet[i]) << " ";

    return 0;
}
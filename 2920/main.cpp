#include <iostream>

using namespace std;

bool isAscending(int num[]) {
    for (int i=0; i<8; i++) {
        if (num[i] != i+1)
            return false;
    }
    return true;
}

bool isDescending(int num[]) {
    for (int i=0; i<8; i++) {
        if (num[i] != 8-i)
            return false;
    }
    return true;
}

int main() {
    int num[8];
    for (int i=0; i<8; i++)
        cin >> num[i];
    
    if (isAscending(num))
        cout << "ascending";
    else if (isDescending(num))
        cout << "descending";
    else
        cout << "mixed";

    return 0;
}
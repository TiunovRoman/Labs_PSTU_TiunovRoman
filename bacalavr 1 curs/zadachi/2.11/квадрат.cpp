#include <iostream>
using namespace std;

int main() {
    int i, j, n;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cout << "*";
    }
    cout << endl;
    for (j = 1; j <= n - 2; j++) {
        cout << "*";
        for (int z = 1; z <= n - 2; z++) {
            cout << " ";
        }
        cout << "*";
        cout << endl;
    }
    for (i = 1; i <= n; i++) {
        cout << "*";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    int limit = (a % 2 == 0) ? a - 1 : a;
    int count = 0, num = 1;

    while (num <= limit * 2) {
        cout << num;
        if ((count + 1) < limit) cout << ", ";
        num += 2;
        count++;
    }

    cout << endl;
    return 0;
}

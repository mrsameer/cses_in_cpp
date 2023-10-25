#include <bits/stdc++.h>

using namespace std;

int main() {
    long n;
    cin >> n;

    set<long> distinctNumbers;
    for (int i = 0; i < n; ++i) {
        long num;
        cin >> num;
        distinctNumbers.insert(num);
    }

    cout << distinctNumbers.size() << endl;
    return 0;
}

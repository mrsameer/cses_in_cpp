#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, x;
    cin >> n >> x;

    vector<pair<int, int>> a;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        a.emplace_back(num, i + 1);
    }

    sort(a.begin(), a.end());

    bool found = false;
    int lo = 0, hi = n - 1;
    while (lo < hi) {
        long leftNum = a[lo].first;
        long rightNum = a[hi].first;
        long targetSum = leftNum + rightNum;

        if (targetSum == x) {
            found = true;
            cout << a[lo].second << " " << a[hi].second;
            break;
        } else if (targetSum > x) {
            hi--;
        } else {
            lo++;
        }
    }

    if (!found) {
        cout << "IMPOSSIBLE";
    }
    return 0;
}
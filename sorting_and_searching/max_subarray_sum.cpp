#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    long curr_sum = 0;
    long max_sum = INT64_MIN;
    for (int i = 0; i < n; ++i) {
        long num;
        cin >> num;

        curr_sum = max(num, curr_sum + num);
        max_sum = max(curr_sum, max_sum);
    }

    cout << max_sum;
    return 0;
}
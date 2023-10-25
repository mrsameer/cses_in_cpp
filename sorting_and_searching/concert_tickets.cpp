#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;

    map<int, int> treeMap;

    // Read and populate the treeMap
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        treeMap[num]++;
    }

    // Process queries
    for (int i = 0; i < m; ++i) {
        int price;
        cin >> price;

        auto it = treeMap.upper_bound(price); // Find the first key greater than price

        if (it != treeMap.begin()) {
            --it; // Decrement to get the maximum key not greater than price
            cout << it->first << "\n";
            treeMap[it->first]--;
            if (treeMap[it->first] == 0) {
                treeMap.erase(it);
            }
        } else {
            cout << "-1\n";
        }
    }

    return 0;
}

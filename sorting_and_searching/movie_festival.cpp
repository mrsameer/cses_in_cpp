#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int, int>> movies;
    for (int i = 0; i < n; ++i) {
        int startTime, endTime;
        cin >> startTime >> endTime;
        movies.emplace_back(endTime, startTime);
    }

    sort(movies.begin(), movies.end());

    int count = 0;
    int endTime = 0;
    for (int i = 0; i < n; ++i) {
        if (movies[i].second >= endTime) {
            count++;
            endTime = movies[i].first;
        }
    }

    cout << count;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define FAST ios::sync_with_stdio(0); cin.tie(0);

long long cnt = 0;
long long n;
vector<string> acts = {"Football", "Swimming", "Running"};

int32_t main() {

    FAST

    cin >> n;

    // each element in queue: (day, current_path)
    queue<pair<int, vector<string>>> q;


    q.push({0, {}});

    while (!q.empty()) {
        auto [day, path] = q.front();
        q.pop();

        if (day == n) {

            for (int i = 0; i < n; i++) {
                if (i != 0) cout << ' ';
                cout << path[i];
            }
            cout << '\n';
            cnt++;
            continue;
        }

        for (string a : acts) {
            if (path.empty() || path.back() != a) {
                vector<string> new_path = path;
                new_path.push_back(a);
                q.push({day + 1, new_path});
            }
        }
    }

    cout << "COUNT: " << cnt << '\n';
}

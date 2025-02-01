#include<bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define neg cout << -1 << endl
#define pb push_back
#define ff first
#define ss second
const int mod = 1e9+7;
const int N = 200005;

void solve() {
    int N, K;
    cin >> N >> K;
    vector<long long> A(N), B(N), C(N);
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < N; i++) cin >> B[i];
    for (int i = 0; i < N; i++) cin >> C[i];

    sort(A.rbegin(), A.rend());
    sort(B.rbegin(), B.rend());
    sort(C.rbegin(), C.rend());

    priority_queue<tuple<long long, int, int, int>> pq;
    set<tuple<int, int, int>> visited;

    pq.push({A[0] * B[0] + B[0] * C[0] + C[0] * A[0], 0, 0, 0});
    visited.insert({0, 0, 0});

    long long result;
    for (int count = 0; count < K; count++) {
        auto [val, i, j, k] = pq.top();
        pq.pop();
        result = val;

        if (i + 1 < N && !visited.count({i + 1, j, k})) {
            pq.push({A[i + 1] * B[j] + B[j] * C[k] + C[k] * A[i + 1], i + 1, j, k});
            visited.insert({i + 1, j, k});
        }
        if (j + 1 < N && !visited.count({i, j + 1, k})) {
            pq.push({A[i] * B[j + 1] + B[j + 1] * C[k] + C[k] * A[i], i, j + 1, k});
            visited.insert({i, j + 1, k});
        }
        if (k + 1 < N && !visited.count({i, j, k + 1})) {
            pq.push({A[i] * B[j] + B[j] * C[k + 1] + C[k + 1] * A[i], i, j, k + 1});
            visited.insert({i, j, k + 1});
        }
    }

    cout << result << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    //cin >> t;
    while (t--) solve();

    return 0;
}


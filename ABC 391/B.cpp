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
    int N, M;
    cin >> N >> M;
    vector<string> S(N), T(M);
    for (int i = 0; i < N; i++) cin >> S[i];
    for (int i = 0; i < M; i++) cin >> T[i];
    for (int a = 0; a <= N - M; a++) {
        for (int b = 0; b <= N - M; b++) {
            bool match = true;
            for (int i = 0; i < M; i++) {
                for (int j = 0; j < M; j++) {
                    if (S[a + i][b + j] != T[i][j]) {
                        match = false;
                        break;
                    }
                }
                if (!match) break;
            }
            if (match) {
                cout << a + 1 << " " << b + 1 << endl;
                return;
            }
        }
    }
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


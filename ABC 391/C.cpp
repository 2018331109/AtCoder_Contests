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
    int N, Q;
    cin >> N >> Q;
    vector<int> nestCount(N + 1, 1);
    vector<int> pigeonNest(N + 1);
    iota(pigeonNest.begin(), pigeonNest.end(), 0);
    int multiNestCount = 0;

    while (Q--) {
        int type;
        cin >> type;
        if (type == 1) {
            int P, H;
            cin >> P >> H;
            int prevNest = pigeonNest[P];
            if (--nestCount[prevNest] == 1) multiNestCount--;
            if (++nestCount[H] == 2) multiNestCount++;
            pigeonNest[P] = H;
        } else {
            cout << multiNestCount << '\n';
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


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
    string D;
    cin >> D;
    if (D == "N") cout << "S\n";
    else if (D == "S") cout << "N\n";
    else if (D == "E") cout << "W\n";
    else if (D == "W") cout << "E\n";
    else if (D == "NE") cout << "SW\n";
    else if (D == "SW") cout << "NE\n";
    else if (D == "NW") cout << "SE\n";
    else cout << "NW\n";
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


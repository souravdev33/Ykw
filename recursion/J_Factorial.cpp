#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
using ll = long long;
using namespace std;

ll sourav(ll n)
{
    if (n == 1 || n == 0)
        return 1;
    else
        return n * sourav(n - 1);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    clock_t start = clock();

    // int tc = 1;
    // cin >> tc;

    // for (int i = 1; i <= tc; i++) {
    //     // cout << "Case #" << i << ": ";
    //     sourav();
    // }
    ll n;
    cin >> n;

    cout << sourav(n) << endl;
    cerr << "Time elapsed: " << clock() - start << "ms!\n";

    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
using ll = long long;
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b, c;
    cin >> a >> b >> c;
    ll maxx = max({a, b, c});
    ll minn = min({a, b, c});
    cout << minn << " " << maxx << endl;
    return 0;
}
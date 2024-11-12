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

    ll x, y;
    cin >> x >> y;
    cout << x << " " << '+' << " " << y << " " << '=' << " " << x + y << endl;
    cout << x << " " << '*' << " " << y << " " << '=' << " " << x * y << endl;
    cout << x << " " << '-' << " " << y << " " << '=' << " " << x - y << endl;

    return 0;
}
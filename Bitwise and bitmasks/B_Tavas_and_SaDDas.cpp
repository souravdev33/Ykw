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

    string str;
    cin >> str;

    ll digits = str.size();

    ll ans = 0;
    ans = (1 << digits) - 2;

    for (ll i = digits - 1, count = 0; i >= 0; i--, count++)
    {

        if (str[i] == '7')
        {
            ans += (1 << count);
        }
    }
    cout << ans + 1 << endl;
}
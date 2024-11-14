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

    ll n;
    cin >> n;
    ll even = 0, odd = 0, pos = 0, neg = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            even++;
        }
        if (v[i] % 2 != 0)
        {
            odd++;
        }
        if (v[i] > 0)
        {
            pos++;
        }
        if (v[i] < 0)
        {
            neg++;
        }
    }
    cout << "Even:" << " " << even << endl;
    cout << "Odd:" << " " << odd << endl;
    cout << "Positive:" << " " << pos << endl;
    cout << "Negative:" << " " << neg << endl;

    return 0;
}
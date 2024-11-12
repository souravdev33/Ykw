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
    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    ll x;
    cin >> x;
    ll found = 0;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            flag = false;
            found = i;
            break;
        }
    }

    if (flag)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << found << endl;
    }
    return 0;
}